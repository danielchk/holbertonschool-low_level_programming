C#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int r = n % 10;
if (r > 5)
printf("Last digit of %d is %d", n, r, " and is greater than 5/n");
if (r == 0)
printf("Last digit of %d is %d", n, r, "and is 0\n");
if (r < 6 && r > 0)
printf("Last digit of %d is %d", n, r, "and is less than 6 and not 0\n");
return (0);
}
