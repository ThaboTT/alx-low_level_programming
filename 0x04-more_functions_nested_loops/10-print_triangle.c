#include "main.h"

/**
* print_triangle - print a triangle using # character
* @size: size of triangle
*
* Retrun: void
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j == (size - i))
				{
					for (k = 0; k <= i; k++)
						 _putchar('#');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
