#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int Ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (Ldigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, Ldigit);
}
	else if (ldigit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, Ldigit);
}
	else if (ldigit < 6 && ldigit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ldigit);
}
return (0);
}
