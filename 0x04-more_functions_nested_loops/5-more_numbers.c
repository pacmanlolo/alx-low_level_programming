#include "main.h"
/**
 * more_numbers - print 10 times given
 */

void more_numbers(void)
{
	int 1, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0'};
		}
		_putchar('\n');
	}
}
