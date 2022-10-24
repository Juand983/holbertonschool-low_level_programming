#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenar
 *@src: origen
 *@dest: destino
 *@n: bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0 ; dest[i] != '\0'; i++)
	{
	}
	for (k = 0 ; k < n ; k++)
	{
		dest[i + k] = src[k];
		if (src[k] == '\0')
			k = n;
	}
	return (dest);
}
