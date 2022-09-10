#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char az = 'z';

	while (az >= 'a')
	{
		putchar(az);
		az--;
	}

	putchar('\n');

	return (0);

}
