#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int m3;
	int m5;

	for (i = 1; i <= 100; i++)
	{
		m3 = i % 3;
		m5 = i % 5;

		if (m3 == 0 && m5 == 0)
			printf("%s ", "FizzBuzz");
		else if (m3 == 0)
			printf("%s ",  "Fizz");
		else if (m5 == 0)
		{
			if (i == 100)
				printf("%s", "Buzz");
			else
				printf("%s ", "Buzz");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');

	return (0);
}
