#include "monty.h"

int stack_or_queue = 0; /* setea como stack */

/**
 *main - monty interpreter
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 on success or EXIT_FAILURE on failure.
 **/

int main(int argc, char *argv[])
{
	FILE *fd;
	size_t buf_read = 0;
	char *token = NULL, *buf = NULL;
	unsigned int line_number = 1;
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n"); /* print on standar error*/
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r"); /*usamos fopen para usarlo con getline */
	if (fd == NULL) /* Si fd es igual a NULL es porque hubo un error */
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buf, &buf_read, fd) != -1) /* leemos la info del fd */
	{
		token = strtok(buf, "\n\t$ "); /*tokenizamos */
		if (token == NULL || token[0] == '#')/* agregamos la opcion de comentarios*/
			continue;
		if (strcmp(token, "push") == 0) /* funcion push */
		{
			token = strtok(NULL, "\n\t$ ");
			push(&head, line_number, token);
		}
		else if (get_op_func(token) != NULL) /*llamada a getopfunc si es dist NULL*/
			get_op_func(token)(&head, line_number);
		else /* else si la funcion no esta definida en get op func */
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token);
			free_doubly_ll(&head), free(buf), fclose(fd);
			exit(EXIT_FAILURE);
		}
		line_number++;
	}
	free_doubly_ll(&head), free(buf);
	fclose(fd);
	return (0);
}
