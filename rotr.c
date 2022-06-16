#include "monty.h"

/**
 *_rotr - swaps the top two elements of the stack.
 *@head: Pointer pointer to the head of a doubly linked list.
 *@line_number: line
 **/

void _rotr(stack_t **head, unsigned int __attribute__((unused)) line_number)
{
	stack_t *aux = *head;

	if (*head == NULL || aux->next == NULL)
		return;

	if ((*head)->next != NULL)
	{
		while (aux->next != NULL)
			aux = aux->next;
		(*head)->prev = aux;
		aux->next = *head;
		aux->prev->next = NULL;
		aux->prev = NULL;
		*head = (*head)->prev;
	}
}
