#include "main.h"

/**
 * main - entry point 
 * prints alphabet in lower case folled by new line
 *
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
