#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: listint_t
 * @index: unsigned int
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *new = *head;
listint_t *temp;
unsigned int counter = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (new)
	{
		if (index == counter + 1)
		{
			temp = new->next;
			new->next = new->next->next;
			free(temp);
			return (1);

		}

		counter++;
		new = new->next;

	}

	return (-1);

}

