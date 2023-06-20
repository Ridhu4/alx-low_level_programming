#include "alxprogram.h"
/**
 * main - Print "alxprogram" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char alxprogram[] = "alxprogram";
	int r = 0;

	while (alxprogram[r] != '\0')
	{
		_putchar(alxprogram[r]);
		r++;
	}
	_putchar('\n');

	return (0);
}
