#include "main.h"
/**
 *print_alphabet_x10 - two
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a, l;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}
