#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - cuenta
 *@n: numbers
 *
 */
void print_to_98(int n)
{
	while (n != 98)
		if (n < 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				n++;
				printf(",");
				printf(" ");
			}
		}
		else if (n > 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				n--;
				printf(",");
				printf(" ");
			}
		}
	printf("%i", n);
	printf("\n");
}
