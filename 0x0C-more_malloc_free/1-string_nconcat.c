#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @string1: string to append to
 * @string2: string to concatenate from
 * @num1: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *string1, char *string2, unsigned int num1)
{
	char *string;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (string1 && string1[len1])
		len1++;
	while (string2 && string2[len2])
		len2++;

	if (num1 < len2)
		string = malloc(sizeof(char) * (len1 + n + 1));
	else
		string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!string)
		return (NULL);

	while (i < len1)
	{
		string[i] = string1[i];
		i++;
	}

	while (num1 < len2 && i < (len1 + n))
		string[i++] = string2[j++];

	while (num1 >= len2 && i < (len1 + len2))
		string[i++] = string2[j++];

	s[i] = '\0';

	return (s);
}

