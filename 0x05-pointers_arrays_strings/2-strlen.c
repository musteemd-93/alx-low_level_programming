#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @str: The string to get the length.
 * Return: The length of @str.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
