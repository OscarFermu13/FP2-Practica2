#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <stdbool.h>
#include <stdio.h>

/* Prototipos */
void print_menu(void);

int pedirNum(void);

unsigned int factorial(unsigned int n);
int fibonacci(int n);
int mcm(int m, int n);
void torresHanoi(int n, char inicial_rod, char final_rod, char mid_rod);
int cercaDicotomica(int array[], int l, int r, int x);
int sumaDigital(int n);
int arrelDigital(int n);

#endif // CALCULADORA_H