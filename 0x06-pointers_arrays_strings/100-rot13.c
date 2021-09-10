#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @rot: int to check
 * Return: encode
 */
char *rot13(char *rot)
{
int i, j;
char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; rot[i] != '\0';)
{
i++
}
for (j = 0; d[j] != '\0';)
{
j++
}
if (rot[i] == d[j])
{
rot[i] = e[j];
break;
}
return (rot);
}
