#include "main.h"

/**
* _isalpha - checks if the character is a letter, lowercase or uppercase
* @c: The character to check
*
* Return: On success 1 other a 0.
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
