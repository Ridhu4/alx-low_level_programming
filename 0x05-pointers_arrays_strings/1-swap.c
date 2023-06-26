#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:First argument to be swapped.
 * @b:second argument to be swapped.
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
