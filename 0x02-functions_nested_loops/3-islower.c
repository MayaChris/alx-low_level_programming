#include "main.h"

/**
 * _islower - This function checks for lowercase character
 * @c: character to be checked
 * Return: shows the result
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
