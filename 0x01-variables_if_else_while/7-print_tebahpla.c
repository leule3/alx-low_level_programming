#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry prints reverse alphabet
 * Return: always succes
 */
int main(void)
{
	char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}

