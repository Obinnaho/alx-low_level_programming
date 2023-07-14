#include <stdio.h>

/**
 * main - State
 * Description: Print alpabet in lowercase and uppercase followed by a new line
 * Return: 0(Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
