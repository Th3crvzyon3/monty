#include "monty.h"

/**
 * pall - print all nodes in stack.
 * @head: pointer at the beginning of the list.
 * @line_number: bytecode line number.
 */

void pall(stack_t **head, unsigned int __attribute__((unused)) line_number)
{
	stack_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return;

	tmp = *head; /* se setea tmp en head, head queda en el comienzo de la lista */
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
