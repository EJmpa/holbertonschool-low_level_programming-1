#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
(* a blank line
* Description: this function prints a fizzbuzz?
* Return: a void function, no return
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{


		if (i == 100)
			printf("Buzz\n");
		else if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
