#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Function returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *asw;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	asw = malloc(sizeof(char) * (i + 1));

	if (asw == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		asw[r] = str[r];

	return (asw);
}
