#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int m;
	int n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
	return (0);
}
