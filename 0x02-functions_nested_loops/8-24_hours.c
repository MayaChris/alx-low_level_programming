#include "main.h"

/**
 * jack_bauer - This func prints every minute of the day of Jack Bauer start
 * ing 00:00 to 23:59, min loop counts min, while hour loop counts hour
 * s and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int minutes_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			minutes_remainder = minutes % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remiander + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_remainder + '0');
			_putchar(':');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
