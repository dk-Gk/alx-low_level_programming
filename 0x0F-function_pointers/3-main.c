#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Funtion
 *
 * @argc: Integer
 * @argv: Array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int (*r)(int, int), a, b;
a = atoi(argv[1]);
b = atoi(argv[3]);
if(argc != 4)
{
printf("Error\n");
exit(98);
}
if ((*argv[2] != '+' &&	*argv[2] != '-' && *argv[2] != '/' && *argv[2] != '*'
     &&*argv[2] != '%')
    || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && (b == 0))
{
printf("Error\n");
exit(100);
}
r = get_op_func(argv[2]);
printf("%d\n", r(a, b));
return (0);
}
