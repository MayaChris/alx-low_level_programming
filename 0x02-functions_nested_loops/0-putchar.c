#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char ab[] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(ab[n]);
		n++;
	}

	_putchar('\n');

	return (0);
}
