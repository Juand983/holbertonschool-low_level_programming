#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenar
 *@dest: destin
 *@src: principio
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (k = 0 ; (dest[i + k] = *src++) != '\0' ; k++)
	{
	}
	return (dest);
}
