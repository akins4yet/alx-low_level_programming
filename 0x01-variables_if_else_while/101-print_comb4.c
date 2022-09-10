#include <stdio.h>



/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */



int main(void)

{

	int i;

	int j;

	int h;



	for (h = '0'; h <= '9'; h++) /*hundreds place*/

	{

		for (j = (h + 1); j <= '9'; j++) /*tens=100s+1*/

		{

			for (i = (j + 1); i <= '9'; i++) /*ones*/

			{

				putchar(h);

				putchar(j);

				putchar(i);

				if (h != '7' || j != '8' || i != '9')

				{

					putchar(',');

			         	putchar(' ');
				}
			}
		}
	}
         putchar('\n');
           return (0);
}
