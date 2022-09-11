#include <stdio.h>

/**
 *main - Writes 00 - 99
 *@void: Empty parameter list for main.
 *Description: Writes number 00-99
 *Return: 0 for success
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 47; i++)
	{
		for (j = 48; j <= 130; j++)
		{
			putchar(i);
			putchar(j);
			if (i + j < 130)
			{
				putchar(44);
				putchar(32);
			}

		}
	}
	putchar(10);
	return (0);
}

