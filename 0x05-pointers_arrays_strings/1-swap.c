#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
