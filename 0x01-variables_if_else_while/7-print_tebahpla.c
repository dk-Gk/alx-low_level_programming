#include <stdio.h>
/**
 * main - prints alphabets in revers
 * Return: returns 0
 */
int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
