# include "main.h"
/**
  * isalpha - checks for alphabetic charactors
  * @c; the character to be checked
  * return;1 for alphabetic character and 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
