#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if input is captial letter.
 * @c: input parameter
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}

