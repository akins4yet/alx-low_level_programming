#include "main.h"



/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */



void print_alphabet(void)

{

	char alph;



	alph = 'a';



	while (alph <= 'z')

	{

		_putchar(alph);

		alph++;

	}
	_putchar('\n');

}
