# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
  *main - Entry point
  *Description; 'prints if number is positive,zero or negative'
  *return; always 0 success
  */
int main(void)
{
	/* body of main function */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
