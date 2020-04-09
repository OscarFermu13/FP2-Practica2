#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "calculadora.h"

/* FUNCION print_menu */
/* Imprime el menu principal y muestra el numero de nodos de la lista enlazada */
/* Recibe el puntero a la lista enlazada */
void print_menu(void)
{
    printf("----- MENU ----- \n");
    printf("1 - Factorial\n");
    printf("2 - Fibonacci\n");
    printf("3 - Maxim Comu Divisor\n");
    printf("4 - Moviments Torres de Hanoi\n");
    printf("5 - Cerca Dicotomica\n");
    printf("6 - Suma Digital\n");
    printf("7 - Arrel Digital\n");
    printf("0 - Salir\n");
}

int pedirNum(void)
{
    int numero = 0;

    printf("Introduce el nuemro deseado (positivo):\n");
    scanf("%d", &numero);

    while (numero < 0)
    {
        printf("Introduce el nuemro deseado (positivo):\n");
        scanf("%d", &numero);
    }

    return numero;
}

unsigned int factorial(unsigned int n)
{
    printf("Sin terminar");
}

int fibonacci(int n)
{
    printf("Sin terminar");
}

int mcm(int m, int n)
{
    printf("Sin terminar");
}

void torresHanoi(int n, char inicial_rod, char final_rod, char mid_rod)
{
    printf("Sin terminar");
}

int cercaDicotomica(int array[], int l, int r, int x)
{
    printf("Sin terminar");
}

int sumaDigital(int n)
{
    if (n == 0)
        return (0);
    else
        return ((n % 10) + sumaDigital(n / 10));
}

int arrelDigital(int n)
{
    if (n <= 9)
        return (n);
    else
        return (arrelDigital(sumaDigital(n)));
}