#include "monty.h"
/**
  * free_s - free
  * @stack: stack
  * Return: void
 */
void free_s(stack_1 *head)
{
	stack_1 *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
