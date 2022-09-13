#include <stdio.h>

/**
 * main  - Entry point
 * c,i,li,ll,f - varibles to store memory size
 * printf - to dispaly output
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	double li;
	double ll;
	double f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}
