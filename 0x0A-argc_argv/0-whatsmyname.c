#include "main.h"
#include <stdio.h>
/**
 * main - prints its name follwoed by a newline
 * @argc: number of arguments
 * @argv: the vector that hold the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
printf("%s\n", argv[argc - 1]);
return (0);
}
