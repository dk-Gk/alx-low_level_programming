#include<stdio.h>
/**
 * main - it is the main
 * Return: returns 0
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return 0;
}
