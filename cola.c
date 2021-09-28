/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

void create(Queue * q) {
    (*q) = NULL;
}

void destroy(Queue * q) {
    if ((*q) == NULL) return;
    else {
        Queue aux = (*q);
        (*q) = (*q)->post;
        free(aux);
        destroy(q);
    }
}

void enqueue(Queue * q, int val) {
    if ((*q) == NULL) {
        (*q) = (Queue) malloc(sizeof (struct TNode));
        (*q)->value = val;
        (*q)->post = NULL;
    } else {
        Queue aux = (*q);
        Queue prev = NULL;
        while ((*q) != NULL) {
            prev = (*q);
            (*q) = (*q)->post;
        }
        (*q) = (Queue) malloc(sizeof (struct TNode));
        (*q)->value = val;
        (*q)->post = NULL;
        prev->post = (*q);
        (*q) = aux;
    }
}

void dequeue(Queue * q) {
    if ((*q) == NULL) {
        printf("No se puede eliminar elementos: Cola vacia\n");
    } else {
        Queue aux = (*q);
        (*q) = (*q)->post;
        free(aux);
    }
}

int first(Queue q) {
    if (q == NULL)
        printf("La cola esta vacia\n");
    else {
        return q ->value;
    }
}

int size(Queue q) {
    if (q == NULL) return 0;
    else {
        1 + size(q->post);
    }
}

int isEmpty(Queue q) {
    if (q == NULL) return 1;
    else {
        return 0;
    }
}

void show(Queue q) {
    if (q == NULL)
        printf("NULL\n");
    else {
        printf("%i->", q->value);
        show(q->post);
    }
}