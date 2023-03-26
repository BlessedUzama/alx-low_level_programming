#include "main.h"

/**
 * main - entry point
 * description: prints the alphabet
 * Return: always 0
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
