/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 28 de septiembre de 2021, 15:17
 */

#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

/*
 * 
 */
int main(int argc, char** argv) {
    Queue q;
    create(&q);
    enqueue(&q, 3);
    enqueue(&q, 5);
    show(q);
    printf("%i\n", first(q));
    printf("%i\n", size(q));
    dequeue(&q);
    show(q);
    printf("%i\n", size(q));
    return (EXIT_SUCCESS);
}

