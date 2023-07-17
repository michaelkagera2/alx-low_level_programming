#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l[26] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	do {
		if (x != 16  && x != 4)
			{
			putchar(l[x]);
			}
			x++;
	} while (x < 26);
	putchar ('\n');
	return (0);
}
