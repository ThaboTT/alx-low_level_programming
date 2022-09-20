#include <stdio.h>

/**
* main - Entry point
*
* Return: Aways 0 (Success)
*/

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '9')
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i);
		i++;
	}

	return (0);
}
