#include "main.h"
/*
 * main - Entry point
 * Description: 'programme prints a letter 10 times'
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round  < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}