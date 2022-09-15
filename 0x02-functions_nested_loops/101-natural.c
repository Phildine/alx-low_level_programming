#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, sum;

	sum = 0;

	for (num  = 0; num <1024; num++)
	{
		if  (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	
	printf("%d\n", sum);
	
	return (0);
}
	
