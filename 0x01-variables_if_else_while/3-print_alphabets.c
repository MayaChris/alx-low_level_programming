#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}

	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ++;
	}

	putchar('\n')

	return (0);

}
