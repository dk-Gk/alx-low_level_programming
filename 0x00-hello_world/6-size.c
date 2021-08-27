#include<stdio.h>
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
printf("Size of char: %zu byte(s)\n", alignof(charType));
printf("Size of int: %zu byte(s)\n", alignof(intType));
printf("Size of long int: %zu byte(s)\n", alignof(longType));
printf("Size of long long int: %zu byte(s)\n", alignof(longlongType));
printf("Size of float: %zu byte(s)\n", alignof(floatType));
#warning it is allowed
return (0);
}
