#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char b;
for (a =  48 ; a < 58 ; a++)
{
putchar(a);
}
for (b = 'a'; b < 'g' ; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
