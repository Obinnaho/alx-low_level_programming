#include <stdio.h>

/**
 * main - Starts program here
 * Description: Prints the lowercase alphabet (excluding 'q' and 'e')
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
