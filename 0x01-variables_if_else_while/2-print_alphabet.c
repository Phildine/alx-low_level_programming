
#include <stdio.h>

/**
 * main - Entry point
 *
 * main - 'prints alphabets in lowercase'
 * 
 * Return: Always 0 (success)
 */

int main(void)
{
	char l_letter;

	for (l_letter = 97; l_letter <= 122; l_letter++)
	{
		putchar(l_letter);
	}

	putchar('\n');

	return (0);
}
