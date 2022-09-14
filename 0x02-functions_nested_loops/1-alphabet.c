#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		_putcahr(ch[n]);
	}

	_putcahr('\n');

	return (0);
}
