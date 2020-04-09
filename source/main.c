#include <stdio.h>
#include <string.h>

#include "../include/calculadora.h"

/* Programa Principal */
int main() {
	int opcion, numero, result;
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
				// factorial()
				break;

			case 2:
				printf("\n\n---  Fibonacci ---\n");
				// fibonacci()
				break;

			case 3:
				printf("\n\n---  Maxim Comú divisor ---\n");
				// mcm()
				break;

			case 4:
				printf("\n\n---  Moviments Torres de Hanoi ---\n");
				// torresHanoi()
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
