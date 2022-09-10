#include <stdio.h>
/**
 * main - programme that prints the reverse alphabet
 *
 * Description: using main function programme prints " reverse alphabet"
 * return: 0
 */
int main(void)
{
	char c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
