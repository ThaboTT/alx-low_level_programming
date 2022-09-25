#include "main.h"

/**
* more_numbers - Prints 10 times the numbers, from 0 to 14
*
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				k = j;
				while (k >= 10)
					k /= 10;
				_putchar('0' + k);
				_putchar('0' + (j % 10));
			}
			else
				_putchar('0' + j);
		}
		_putchar('\n');
	}
}
