#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*This program will assign a random number to variable
*Return: 0
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (n > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, last);
else if (n = 0)
printf("Last digit of %i is %i and is 0\n", n, last);
else (n < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
return (0);
}
