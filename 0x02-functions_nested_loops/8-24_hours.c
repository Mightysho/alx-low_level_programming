#include "holberton.h"

/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar(x / 10 + 48);
			_putchar(x % 10 + 48);
			_putchar(':');
			_putchar(y / 10 + 48);
			_putchar(y % 10 + 48);
			_putchar('\n');
		}
	}
}
