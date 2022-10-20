#include "main.h"

/**
 * prints_x10 lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; <= 'z'; la++)
			_puttchar(la);
		_putchar('\n');
	}
}
