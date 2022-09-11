#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch = '0';
	char af = 'a';

	while (ch <= '9')
	{
		putchar(af);
		af++;
	}

	putchar('\n');

	return (0);

}
