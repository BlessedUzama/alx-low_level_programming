#include "main.h"

/**
 * print_alphabet - function that prints alphabet in lower case
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
