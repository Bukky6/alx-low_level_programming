#include "main.h"

/**
 * _isupper - Check if a letter is upper case.
 * @x: Character to be checked
 *
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
