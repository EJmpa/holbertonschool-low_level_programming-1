#include "holberton.h"
/**
 * puts2 - this function prints a str only the even lines
(* a blank line
 *@str: this parameter is the str
* Description: this funtion prints a str only the even lines)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void puts_half(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;

	if (size % 2 != 0 )
		size--;

	for (size /= 2; size != '\n'; size++)
	{
		_putchar(str[size]);
	}
	_putchar('\n');
}
