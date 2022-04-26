#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: listint_t
 * Return: void
 */


void free_listint2(listint_t **head)
{

	listint_t *new;

	if (!head)
		return;

	while ((*head) != NULL)
	{
		new = *head;
		(*head) = (*head)->next;
		free(new);

	}

	(*head) = NULL;


}

