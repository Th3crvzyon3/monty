#include "monty.h"

/**
 * check_number - checks that a string only contains numbers.
 * @str: string to check
 * Return: 0 if number, else 2 if not numbers.
 */

int check_number(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (isdigit(str[i]) == 0) /* Si isdigit retorna 0 str no es un numero */
			return (2);
	}
	return (0);
}
