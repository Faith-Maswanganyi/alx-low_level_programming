#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to the new duplicated string
 * @str: char
 * Return: a pointer to the array or NULL if it fails
 */
char *_strdup(char *str)
{
	char *abc;
	int i;

	r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		abc[r] = str[r];

	return (abc);
}
