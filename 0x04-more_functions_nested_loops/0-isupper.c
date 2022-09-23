#include "main.h"

/**
* _isupper - check a character.
* @c: to be checked.
*
* Return:  Uppercase 1
* Lowercase 0.
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (0);
	}
	return (0);
}
