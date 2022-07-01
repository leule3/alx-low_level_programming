#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
 * main -entry
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = ran() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n",n);
	if (n < 0)
		printf("%d is negative\n"n);
	if (n > 0)
		printf("%d id postive\n",n);
	return (0);
}

