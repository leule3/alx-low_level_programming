#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- felege
 * Return:0 cha
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar(10);
return (0);
}
