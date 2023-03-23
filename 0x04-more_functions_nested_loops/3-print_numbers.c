# include "main.h"
/**
  *print_nummbers - print 0-9
  * return void
  */

void print_numbers(void)
{
	char c;

	for(c = '0', c <= 'g', c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
