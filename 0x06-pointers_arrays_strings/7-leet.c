#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: pointer
 * Return: c
 */
char *leet(char *c)
{
int i,j;
char l[] = "aeotl";
char ll[] = "AEOTL";
char n[] = "43071";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (c[i] == l[j] || c[i] == ll[j])
c[i] = n[j];
}
}
return (c);
}
