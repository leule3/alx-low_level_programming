#include <stdio.h>
/**
 * main- prints all possible combination od single digit numbers
 * Return: 0 if success else nonzero
 */
int main(void)

{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

