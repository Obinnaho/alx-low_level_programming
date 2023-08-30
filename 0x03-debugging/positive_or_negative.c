#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * @n: pra

 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
}
