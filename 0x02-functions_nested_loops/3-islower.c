# include "main.h"
/**
 * islower - checks for lowercase character
 * @c; the character to be checked
 * return; 1 for lowercase character or 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}