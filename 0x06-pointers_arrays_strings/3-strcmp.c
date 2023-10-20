#include "main.h"
/**
 * _strcmp -compare string values
 * @a: pointer to first string
 * @b: pointer to second string
 * Return: a[i] - b[i]
 */
int _strcmp(char *a, char *b)
{
int i;

i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
		return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}
