#include "main.h"
/**
 * main - Entry point
 * Description- 'checks for lowercase'
 * _islower - checks for lowercase character
 *
 * @c:character to check
 * Return : 1 if c is lowercase, 0 otherwise (sucess)
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}