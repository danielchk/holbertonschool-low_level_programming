#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = '0';
int v = '0';
int t = '0';
while (x <= '9')
{
v = '0';
while (v <= '9')
{
t = '0';
while (t <= '9')
{
if (x == v || x == t || v == t)
{
}
else if (x > v || x > t || v > t)
{
}
else
{
putchar(x);
putchar(v);
putchar(t);
if (x == '7' && v == '8' && t == '9')
{
break;
}
putchar(',');
putchar(' ');
}
t++;
}
v++;
}
x++;
}
putchar('\n');
return (0);
}
