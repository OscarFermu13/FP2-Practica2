#include <stdio.h>
#include <string.h>

#include "../include/calculadora.h"

/* Programa Principal */
int main() {
	int opcion, numero, result, num_mcm1, num_mcm2, numhanoi;
	char enter;
	bool correcte = true;

	FILE *file = fopen("data/cercaDicotomica.txt", "r");

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
				numero = pedirNum();
				result = factorial(numero);
				printf("El factorial de %d es %d\n\n", numero, result);
				break;

			case 2:
				printf("\n\n---  Fibonacci ---\n");
				numero = pedirNum();
				result = fibonacci(numero);
				printf("El fibonacci de %d es %d\n\n", numero, result);
				break;

			case 3:
				printf("\n\n---  Maxim Comú divisor ---\n");
				printf("Numero 1: ");
				num_mcm1 = pedirNum();
				printf("Numero 2: ");
				num_mcm2 = pedirNum();
				result = mcm(num_mcm1, num_mcm2);
				printf("El maximo comun divisor de %d y %d es: %d\n\n", num_mcm1, num_mcm2, result);
				break;

			case 4:
				printf("\n\n---  Moviments Torres de Hanoi ---\n");
				numhanoi = pedirNum();

				if (numhanoi < 3 || numhanoi > 10)
					correcte = false;

				while(!correcte)
				{
					printf("\nEl numero tiene que estar entre 3 y 10\n");
					numhanoi = pedirNum();
					if (numhanoi < 3 || numhanoi > 10)
						correcte = false;
					else
						correcte = true;
					
				}
					
				torresHanoi(numhanoi, 'A', 'C' , 'B');
				printf("\n");
				break;

			case 5:
				printf("\n\n---  Cerca dicotòmica ---\n");

				int array[] = {2, 5, 7, 9, 11};

				int n = sizeof(array) / sizeof(array[0]);

				numero = pedirNum();
				result = cercaDicotomica(array, 0, n-1, numero);
				
				(result == -1) ? printf("El numero %d no esta en el conjunto de numeros\n\n", numero) 
							   : printf("El numero %d esta en la posicion %d\n\n", numero, result + 1);
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

	fclose(file);
}
