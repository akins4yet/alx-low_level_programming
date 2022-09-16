#include <stdio.h>
#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
