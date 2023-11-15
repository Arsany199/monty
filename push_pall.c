#include "monty.h"

/**
 * monty_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 *
 * Return: no return
*/
void monty_push(stack_t **head, unsigned int count)
{
	int i, j = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		while (bus.arg[j] != '\0')
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
			j++;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
/**
 * monty_pall - prints the stack
 * @head: stack head
 * @counter: nothing
 *
 * Return: no return
*/
void monty_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
