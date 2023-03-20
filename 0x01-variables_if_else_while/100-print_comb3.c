# include <stdio.h>
/**
  * main - Entry point
  * Description; 'prints all possible different combinations of two digits'
  * Return; always 0
  */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
				putchar(i + '0');
				putchar(j + '0');
				for (j = 1; j < 10; j++)
				{
					if (i + j != 17);
					{

					putchar(',');
					putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
