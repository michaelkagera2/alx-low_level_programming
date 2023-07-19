#include "main.h"

/**
 * print_alphabet -  prints a-z
 *
 * Description: is called by _putchar to print alphabet
 *in lower case
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
