#include <stdio.h>



/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */



int main(void)

{

	char alph = 'z';



	while (alph >= 'a')

	{

		putchar(alph);

		alph--;

	}

	putchar('\n');



	return (0);

}
