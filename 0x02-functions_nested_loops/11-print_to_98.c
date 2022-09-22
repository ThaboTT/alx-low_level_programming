#include "main.h"

/**
* print_to_98 - print all natural numbers from n to 98.
* @n: integer to print fro.
*
* Return: void.
*/
void print_to_98(int n)
{
	int i, k;

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n < -9)
				{
					i = n;
					while (i <= -10)
						i /= -10;
					_putchar('0' + i);
					_putchar('0' + (n % 10));
				}
				else
					_putchar('0' + (-n));
			}		
			else if (n >= 0 && n < 10)
			{
				_putchar('0' + n);
			}
			else
			{
				i = n;
				while (i >= 10)
					i /= 10;
				_putchar('0' + i);
				_putchar('0' + (n % 10));
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			i = n;
			while (i >= 10)
				i /= 10;
			if (n < 100)
			{
				_putchar('0' + i);
				_putchar('0' + (n % 10));
			}
			else
			{
				k = n / 10;
				_putchar('0' + i);
				_putchar('0' + (k % 10));
				_putchar('0' + (n % 10));
			}
			
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
