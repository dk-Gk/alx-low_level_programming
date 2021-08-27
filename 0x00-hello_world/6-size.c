#include<stdio.h>
#include <stddef.h>
#include <stdalign.h>
/**
 * main - it is the main
 * Return: returns 0
 */
int main(void)
{
int intType;
float floatType;
long int longType;
char charType;
long long int longlongType;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
