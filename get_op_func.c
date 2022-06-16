#include "monty.h"

/**
 * get_op_func - select correct function
 * @token_op: First bytecode input
 * Return: pointer to the correct function
 */

void (*get_op_func(char *token_op))(stack_t **stack, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"nop", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"queue", queue},
		{"stack", stack},
		{NULL, NULL}
	};
	int i = 0;

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(token_op, opcodes[i].opcode) == 0)
			return (opcodes[i].f);
		i++;
	}
	return (NULL);
}
