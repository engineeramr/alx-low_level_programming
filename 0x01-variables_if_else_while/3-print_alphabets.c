#include <stdio.h>
/**
* main - main block
* Return: 0
* a program that prints the alphabet in lowercase, and then in uppercase
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
c = 'A';
while (alphabet <= 'Z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
