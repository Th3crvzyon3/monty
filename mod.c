#include "monty.h"

/**
 *_mod - subtracts the two top elements of the stack from the second element.
 *@head: pointer pointer to the list.
 *@line_number: number of the line.
 **/

void _mod(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		free_doubly_ll(head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0 || (*head)->next->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	(*head)->n = (*head)->n % aux->n;
	(*head)->prev = NULL;
	del_node(&aux);
}
