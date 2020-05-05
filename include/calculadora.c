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

    printf("Introduce el numero deseado (positivo):\n");
    scanf("%d", &numero);

    while (numero < 0)
    {
        printf("Introduce el numero deseado (positivo):\n");
        scanf("%d", &numero);
    }

    return numero;
}

int * leerArchivo()
{
    FILE *file = fopen("data/cercaDicotomica.txt", "r");
    int i = 0;
    static int array[100] = {0};

    if (file == NULL)
        printf("El archivo no existe.\n\n");

    while(!feof(file))
    {
        int num = 0;
        fscanf(file, "%d", &num);
        array[i] = num;
        i++;
    }

    fclose(file);

    return array;
}

unsigned int factorial(unsigned int n)
{
    if(n==0)
       /* Si el numero introducido es 0, retorna 1, ya que el factorial de 0 es 1*/
       return 1;
    else
        /* Si el numero es diferente de 0, retorna el numero multiplicado por la funcion con el valor-1 */
        return n*factorial(n-1);
}

int fibonacci(int n)
{
    if (n <= 1 )
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int mcm(int num1, int num2)
{
    if (num2==0)
        return num1;       
    else
        /* Divide el numero 1 entre el 2 hasta llegar a 0 donde se retorna el num1*/   
        return mcm(num2, num1%num2);
}

void torresHanoi(int n, char posinicial, char posdestino, char posauxiliar)
/* Esta función lo que hace es convertir un problema complicado en varios simples.
Exactamente lo que hace es que si nosotros tenemos el problema torresHanoi(n,A,C,B)
lo divide en {(n-1,A,B,C), (n-2,A,C,B), (n-3, A,B,C), ..., (1, A, C/B, B/C)}*/
{
    if (n == 1) 
    { 
        printf(" Mover el disco 1 desde %c hasta %c\n", posinicial, posdestino); 
        return; 
    } 
    else
    {
        /* En esta secuencia se cambia de posición todas las fichas hasta llegar a la 1
        en la cual se entraria al "if" y se repetiria la función hasta que llegar a (n,A,C,B)
        donde ya estarian todas las fichas ordenadas como en la posición inicial pero en la 
        tercera bara */
        torresHanoi(n-1, posinicial, posauxiliar, posdestino); 
        printf(" Mover el disco %d desde %c hasta %c\n", n, posinicial, posdestino); 
        torresHanoi(n-1, posauxiliar, posdestino, posinicial); 
    }
}

int cercaDicotomica(int array[], int l, int r, int x)
{
    if(r >= l)
    {
        int mid = l + (r - l)/2;

        if (array[mid] == x )
            return mid;
        
        if (array[mid] > x) 
            return cercaDicotomica(array, l, mid-l, x);

        return cercaDicotomica(array, mid+l, r, x);        
        
    }

    return -1;
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