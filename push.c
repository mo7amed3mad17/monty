#include "monty.h"
/**
  * _push - function to push
  * @n: the val to be pushed
  * @line_c: counter
  * @stack: the org stack
  * Return: new stack
 */
void _push(stack_1 **head, unsigned int line_c)
{
	int val, c;
	stack_1 *ptr;
	stack_1 *new;

	new = malloc(sizeof(stack_1));

	if (new == NULL)
	return;

	c = check_n(inf.parsed[1]);
	if (inf.parsed[1] == NULL || c != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_c);
		fclose(inf.file);
		free_s(*head);
		free(inf.parsed);
		exit(EXIT_FAILURE);
	}
	val = atoi(inf.parsed[1]);
	(void) line_c;
	new->n = val;
	new->next = NULL;
	ptr = *head;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
			ptr->next = new;
	}

	else
	{
		*head = new;
	}
	new->prev = ptr;
}
