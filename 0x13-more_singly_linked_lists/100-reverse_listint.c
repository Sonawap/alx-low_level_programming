#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse listint
 * @head: listint_t
 * Return: listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = *head;
	listint_t *temp;


	if (!(*head) || !head)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	temp = (*head)->next;
	*head = temp;
	p->next = NULL;


	while ((*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = p;
		p = *head;
		(*head) = temp;
	}

	(*head)->next = p;

	return (*head);

}

