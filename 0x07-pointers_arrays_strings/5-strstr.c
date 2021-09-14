#include <stdio.h>
#include "main.h"
/**
 * *_strstr - main function.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
while (needle[i])
{
while (*haystack)
{
if (*haystack == needle[i])
{
return (haystack);
}
haystack++;
}
if (needle == 0 || *needle == '\0')
{
return (0);
}
i++;
}
return (NULL);
}
