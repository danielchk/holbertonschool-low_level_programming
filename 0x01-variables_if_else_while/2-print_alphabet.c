#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char az[26] = "abcdefghijklmnopqrstuwxyz";
int h = 0;
char alfa;
while (h < 26)
{
alfa = az[h];
putchar(alfa);
h++;
}
putchar ('\n');
return(0);
}
