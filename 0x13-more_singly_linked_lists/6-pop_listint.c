#include "lists.h"

/**
 *pop_listint - deletes head node
 *@head: listint_t
 *Return: int
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *new = *head;

	if (*head == NULL)
		return (0);

	i = new->n;
	*head = (*head)->next;
	free(new);
	return (i);


}

