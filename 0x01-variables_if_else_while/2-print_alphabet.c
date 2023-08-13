#include <stdio.h>
/**
*main - main block
* Return: 0
* a program that prints the alphabet in lowercase, followed by a new line
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
