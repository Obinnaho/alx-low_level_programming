#include "lists.h"

/**
 * sum_listint - Functiom calculates
 * sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_data += temp->n;
		temp = temp->next;
	}

	return (sum_data);
}
