#include "main.h"
/**
 * jack_bauer - computes alphabet
 * Return: Always 0
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < j && i != j)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(58);
putchar ((j / 10) + '0');
putchar ((j % 10) + '0');
}
