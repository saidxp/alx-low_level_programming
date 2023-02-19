#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, b;

	for (n = 0; n <= 7; n++)
	{
		for (m = 1; m <= 8; m++)
		{
			for (b = 2; b <= 9; b++)
			{
				if (b > m && m > n)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(b + '0');
					if (n != 7 || m != 8 || b != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
