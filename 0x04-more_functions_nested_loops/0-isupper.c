#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c > 40 && c < 60)
		return (1);

	return (0);
}
