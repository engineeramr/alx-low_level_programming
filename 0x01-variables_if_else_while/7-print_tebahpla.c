#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the lowercase alphabet in reverse followed by a new line.
 *
 * Return: 0 (sucess)
*/
int main(void)
{
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
