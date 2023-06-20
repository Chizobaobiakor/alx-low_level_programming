#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char letter;

	for (int i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
