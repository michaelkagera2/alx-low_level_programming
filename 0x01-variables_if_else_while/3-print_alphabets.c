#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l[56] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x = 0;

	do {
	putchar(l[x]);
	x++;
	} while (x < 56);
	putchar ('\n');
	return (0);
}
