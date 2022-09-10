#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Description - program prints "[A-Z][a-z]
 *
 * return: '0'
 */

int main(void)
{
	char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar ('\n');
return (0);
}
