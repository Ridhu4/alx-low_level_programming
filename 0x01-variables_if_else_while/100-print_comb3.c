#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int r, a, b;

	r = 0;

	while (r < 100)
	{
		a = r % 10; /* singles digit */
		b = r / 10; /* doubles digit */

		if (b < a)
		{
			putchar(b + '0');
			putchar(a + '0');

			if (r < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		r++;
	}
	putchar('\n');

	return (0);
}
