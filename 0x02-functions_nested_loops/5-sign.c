#include "main.h"

/**
* print_sign - To check the value
* @n: The value to be checked.
*
* Return: On positive 1
* On negative -1 ,  On zero 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
