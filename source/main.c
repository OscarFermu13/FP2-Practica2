#include <stdio.h>
#include <string.h>

#include "../include/calculadora.h"

/* Programa Principal */
int main() {
	int opcion, numero, result, num_mcm1, num_mcm2, numhanoi;
	unsigned int numfact;
	char enter;

/* Cargar el menu principal */
	print_menu();
	scanf("%d", &opcion);
	scanf("%c", &enter);

	while (opcion != 0)
	{
		switch (opcion)
		{
			case 1:
				printf("\n\n---  Factorial ---\n");
				printf("Introduce un numero (positivo)\n");
				scanf("%d", &numfact);
				printf("El factorial de %d es %d\n", numfact, factorial(numfact));
				break;

			case 2:
				printf("\n\n---  Fibonacci ---\n");
				// fibonacci()
				break;

			case 3:
				printf("\n\n---  Maxim Comú divisor ---\n");
				printf("Introduce un numero (positivo)\n");
				printf("Numero 1: ");
				scanf("%d", &num_mcm1);
				printf("\nNumero 2: ");
				scanf("%d", &num_mcm2);
				printf("El maximo comun divisor de %d y %d es: %d\n", num_mcm1, num_mcm2, mcm(num_mcm1, num_mcm2));

				break;

			case 4:
				printf("\n\n---  Moviments Torres de Hanoi ---\n");
				printf("Intoduce un numero (entre 3 y 10).");
				scanf("%d", &numhanoi);
				if (numhanoi > 10 || numhanoi < 3)
				{
					printf("El numero debe estar entre 3 y 10.");
				} 
				else
				{
					torresHanoi(numhanoi, 'A', 'C' , 'B');
				}
				break;

			case 5:
				printf("\n\n---  Cerca dicotòmica ---\n");
				// cercaDicotomica()
				break;

			case 6:
				printf("\n\n---  Suma digital ---\n");
				numero = pedirNum();
				result = sumaDigital(numero);
				printf("El valor es :%d\n\n", result);
				break;

			case 7:
				printf("\n\n---  Arrel Digital ---\n");
				numero = pedirNum();
				result = arrelDigital(numero);
				printf("El valor es :%d\n\n", result);
				break;

			case 0:
				opcion = 0;
				break;
			
			default:
				break;
		}

		print_menu();
		scanf("%d", &opcion);
		scanf("%c", &enter);
	}
}
