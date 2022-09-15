#include "main.h"

/**
 * times_table - this func prints the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int num;
	int mult;
	int prod;

	for (num = 0; num <= 9; num++)
	{	_putchar(',');
		_putchar(' ');

		prod = num * mult;

		if (prod <= 9)
		{
			_putchar(' ');
		}

		else
		{
			_putchar((prod / 10) + '0');
		}
		_putchar((prod % 10) + '0');
	}
	_putchar('\n');
}
