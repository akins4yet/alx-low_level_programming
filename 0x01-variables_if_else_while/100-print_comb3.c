#include <stdio.h>



/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *Return: Always 0 (Success)
 */



int main(void)

{

	int i;

	int k;



	for (k = '0'; k <= '9'; k++) /*increment tens*/

	{

		for (i = (k + 1); i <= '9'; i++) /*one's ten+1*/

		{

			putchar(k);

			putchar(i);


			if (k != '8' || i != '9') /*print commas*/

			{

				putchar(',');

				putchar(' ');

			}

		}

	}

	putchar('\n');



	return (0);

}
