#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a;
for (n = 0; n <= 98; n++)
{
for (a = n + 1; a <= 99; a++)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
putchar(' ');
putchar((a / 10) + '0');
putchar((a % 10) + '0');
if (n == 98 && a == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
