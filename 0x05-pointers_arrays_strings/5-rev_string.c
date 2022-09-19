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
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int x = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (x < j)
	{
		tmp = s[x];
		s[x] = s[j];
		s[j] = tmp;
		x++, j--;
	}
}
