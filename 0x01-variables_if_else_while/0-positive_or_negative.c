#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * rand - To generate random values
 * return - Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * conditional statement 
	 */
	if (n < 0)
		printf("%d is negative\n",n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
