#include "main.h"
/**
 *jack_bauer - oeigth
 *h: hour - m = minutes
 *Return: 24
 */

void jack_bauer(void)

{
	int h, m;

	for (h = 0; m < 60; m++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
