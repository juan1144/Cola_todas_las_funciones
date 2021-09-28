/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   cola.h
 * Author: juan
 *
 * Created on 28 de septiembre de 2021, 15:18
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef COLA_H
#define COLA_H

/*Variables*/

typedef struct TNode* Queue;

struct TNode {
    int value;
    Queue post;
};

/*Funciones*/

void create(Queue * q);
void destroy(Queue * q);
int size(Queue q);
int first(Queue q);
int isEmpty(Queue q);
void show(Queue q);
void enqueue(Queue * q, int val);
void dequeue(Queue * q);

#endif /* COLA_H */

