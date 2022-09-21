#include "main.h"

/**
* _islower - checks for lowercase character
*
* Return: i if lowercase or 0 if otherwise
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
