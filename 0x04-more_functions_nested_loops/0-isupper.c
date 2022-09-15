#include <stdio.h>
#include "main.h"
/**
* _isupper - check if input is uppercace.
* @c: character to check
* Return: Always 1 if yet and 0 if not.
**/
int _isupper(int c)
{
int i;
for (i = 65; i < 90; i++)
{
if (i == c)
{
return (1);
}

}
return (0);
}

