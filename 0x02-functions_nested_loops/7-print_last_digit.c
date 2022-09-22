#include "main.h"

/**
* print_last_digit - computes and prints the last digit
* @c: number with last digit to be printed.
*
* Return: The last digit.
*/

int print_last_digit(int c)
{
	int l = c % 10;
	int i;

	if (c < 0)
	{
		i = -l + '0';
		_putchar(i);
		return (-l);
	}
	else
	{
		i = l + '0';
		_putchar(i);
		return (i);
	}
}
