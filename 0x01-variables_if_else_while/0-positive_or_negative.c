#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	while(n>0) {
		printf("%d is positive\n", n);
	}
	while(n=0) {
		printf("%d is zero\n", n);
	}
	while(n<0) {
		printf("%d is negative\n", n);
	}
	return (0);
}