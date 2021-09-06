#include "main.h"
/**
 * swap_int - function that prints the swaped value
 * @a: pointer value one
 * @b: pointer value two
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int *c = b;
*b = a;
*a = c;
}
