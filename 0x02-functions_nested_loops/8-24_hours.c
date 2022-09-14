#include "main.h"
/**
 * jack_bauer - print every minute of the day
 * void: nothing to return
 * Return:
 */
void jack_bauer(void)
{
	int h, hh;

	for (h = 0; h <= 23; h++)
	{
		for (hh = 0; hh <= 59; hh++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(hh / 10 + '0');
			_putchar(hh % 10 + '0');
			_putchar('\n');
		}
	}
}
