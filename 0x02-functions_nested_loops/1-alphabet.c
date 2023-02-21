#include "main.h"

/**
 * print_alphabet - prints the alphabeth in lower case followed by a new line
 */

void print_alphabeth(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
