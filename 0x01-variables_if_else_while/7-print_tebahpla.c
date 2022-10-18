#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Reurn: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
