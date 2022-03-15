#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */

void print_alphabet(void)
/* void indicates no return expected */
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
