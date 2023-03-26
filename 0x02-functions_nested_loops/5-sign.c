# include "main.h"
# if nder "main.h"
/**
  *print_sign - print the sign of a number
  *@c; the number to be checked
  *return 1 for a positive num,-1 for a negative num and 0 for anything else
  */

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
