#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int b;

	a = 612852475143;
	for (b = 2 ; b < a ; b++)
	{
		if (a % b == 0)
		{
			a = a / b;
			b--;
		}
	}
	printf("%ld", a);
	printf("\n");
	return (0);
}
