#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenate two strings
 * using at most n n bytes from src
 * @dest: The value to input
 * @src: The value to input
 * @n: The value to input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
