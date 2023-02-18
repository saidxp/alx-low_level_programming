#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
	putchar(num);

	putchar('\n');

	return (0);
}
