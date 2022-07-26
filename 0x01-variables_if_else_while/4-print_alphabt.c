#include <stdio.h>
/**
* main - Entry Point
*
* Return: Resultof characters
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
continue;
}
else
{
putchar(ch);
ch++;
}
}
putchar('\n');

return (0);
}
