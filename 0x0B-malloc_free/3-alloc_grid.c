#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
    int **grid;

	grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }

    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    free_grid(grid, 4);
    return (0);
}
