# include <stdio.h>
/**
  * main - Entry point
  * Dscription; 'Print alphabets lowercase'
  * Return.; always 0
  */
int main(void)

{
	/* body of main function*/
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
		return (0);
}
