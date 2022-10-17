#include "main.h"
/**
 *times_table - nine
 *
 */
void times_table(void)
{
	int n, x, m;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar('0');
		for (x = 1 ; x <= 9 ; x++)
		{
			_putchar(',');
			_putchar(' ');
			m = (n * x);
			if (m < 10)
				_putchar(' ');
			else
				_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
		}
		_putchar('\n');
	}
}
