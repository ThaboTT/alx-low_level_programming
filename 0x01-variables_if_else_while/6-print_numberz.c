#include <stdio.h>

/**
* main - Entry point
*
* Reurn: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	/* Use ASCII to translate 0-9 values */
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
