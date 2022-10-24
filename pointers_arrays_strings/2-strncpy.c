#include "main.h"

/**
 * *_strncpy - copy bytes
 *@dest: destino
 *@src: origen
 *@n: number byts
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	{
		if (src[i] == '\0')
			dest[i] = '\0';
	}
	return (dest);
}
