#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, c;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar(10);
	}
}
