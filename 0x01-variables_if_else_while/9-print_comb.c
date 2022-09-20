#include <stdio.h>

/**
* main - Entry point
*
* Return: Aways 0 (Success)
*/

int main(void)
{
	int i = '0';
	int it = 0;

	do
	{
		putchar(i);
		
		if (i != '9')
		{
			for (it = '0'; it < '1'; it++)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;

	} while (i <= '9');

	putchar('\n');

	return (0);
}
