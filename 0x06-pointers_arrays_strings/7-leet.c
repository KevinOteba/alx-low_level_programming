#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 * Returns the leet version of the given string(n).
 */
char *leet(char *n)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == a[j])
{
n[i] = b[j];
}
}
}
return (n);
}
