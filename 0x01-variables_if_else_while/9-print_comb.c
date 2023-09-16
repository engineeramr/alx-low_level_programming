#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printss all possible combinations of single-digit n
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
int n = 0;
while (n <= 9)
{
putchar(n + 48);
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}
return (0);
}
