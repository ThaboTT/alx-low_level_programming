#include "main.h"

/**
* times_table - Print the 9 times table
*
* Return: void
*/
void times_table(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			l = i * j;
			/**
			 * l - to store the answer.
			 * k - to store the last digit of the answer.
			 * m - to store the first digito f the answer.
			 */
			if (l < 10)
				_putchar('0' + l);
			else
			{
				k = l % 10;
				m = l;
				while (m >= 10)
					m /= 10;

				_putchar('0' + m);
				_putchar('0' + k);
			}

			if (j != 9)
			{
				_putchar(',');
				if (l < 10)
				{
					_putchar(32);
					_putchar(32);
				}
				else
					_putchar(32);
			}
		}
		_putchar('\n');
	}
}
