#include <stdio.h>
/**
* main - prints alphabets except e and q
* Return: returns 0
*/
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
