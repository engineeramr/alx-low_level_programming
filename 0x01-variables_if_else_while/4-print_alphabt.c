#include <stdio.h>
/**
*main - main block
*Return: 0
*a program that prints the alphabet in lowercase
*Print all the letters except q and e
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c)
}
c++;
}
putchar('\n');
return (0);
}
