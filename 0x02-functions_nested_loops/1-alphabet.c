#include "main.h"

/**
 * main - entry point
 * description: prints the alphabet
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
