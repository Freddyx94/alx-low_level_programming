#include <stdio.h>
/**
 * main - line that makes the progrm prints 1[2] = 98
 *
 * Return: Success 0 Always
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}