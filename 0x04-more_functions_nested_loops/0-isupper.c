#include "main.h"

/**
 * _isupper - define if a character is uppercase
 * Decription: Prints the alphabet with _putchar
 * @c: character to check for uppecase
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
