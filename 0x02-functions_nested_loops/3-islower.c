#include "main.h"

/**
 * _islower - shows 1 for lower case characters and 0 for others
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
