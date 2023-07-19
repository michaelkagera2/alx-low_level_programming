#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Description: Calls print alphabet 10 times
*/

void print_alphabet_x10(void)
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
