#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int id;
	int len = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */
	if (len % 2 != 0)
		id = (len / 2) + 1;
	else
		id = (len / 2);

	while (id < len)
	{
		_putchar(*(str + id));
		id++;
	}
	_putchar('\n');
}
