#include "main.h"

/**
 * _strcpy - copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is copia
 *
 * Return: This is copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
