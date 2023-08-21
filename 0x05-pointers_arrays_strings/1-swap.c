#include "main.h"

/**
 * swap_int - Writing a function that swaps the values of two integer
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
