#include "lists.h"

/**
 *sum_listint - returns the sum of all the data
 * @head: listint_t
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}

