#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry Point
*
* Return: last digit
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
n = n % 10;
if (n > 5)
{
printf("%d is greater than 5\n", n);
}
else if (n == 0)
{
printf("%d is 0 and is 0\n", n);
}
else
{
printf("%d is less than 6 and not 0\n", n);
}
return (0);
}
