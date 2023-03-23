#include<stdio.h>

/**
 * main - Entry point
 * description:  prints all single digit numbers of base 10
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
