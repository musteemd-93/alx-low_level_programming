#include "main.h"

/**
 * _islower - checks for lowercase character
 *@i: is the character to be checked
 * Return: 1 if character is lowercase, otherwise 0.
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
