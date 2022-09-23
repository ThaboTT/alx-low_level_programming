#include "main.h"

/**
* _isdigit - check if input is a digit.
* @c: input to be checked
*
* Return: digit 1
* otherwise 0
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);

	return (0);
}
