#include "holberton.h"
/**
 * _strchr - this function find a charecter ina string
 * @s: this is the string
 * @accept: this is the char accepts to build words
 (* a blank line
* Description: this function find a char)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0, j = 0;

	while((*(s + i) = *(accept + j)) && *(s + i) != '\0')
	{
		i++;
		j++;
	}
	return (i);
}
