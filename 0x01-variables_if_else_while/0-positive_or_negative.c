#include <stdlib.h>
#include <time.h>

/**
 * main - prints a random number n and state whether n is positive, zero, or negative.
 * Retturn: Always 0.
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
elseXXx
printf("%d is zero\n",n);
	return (0);
}
