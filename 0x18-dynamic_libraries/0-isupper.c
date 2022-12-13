#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: caracter to check
 *Return: return 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
