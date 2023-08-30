#include "lists.h"

/**
 * find_listint_loop - Function finds loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_run = head;
	listint_t *fast_run = head;

	if (!head)
		return (NULL);

	while (slow_run && fast_run && fast_run->next)
	{
		fast_run = fast_run->next->next;
		slow_run = slow_run->next;
		if (fast_run == slow_run)
		{
			slow_run = head;
			while (slow_run != fast_run)
			{
				slow_run = slow_run->next;
				fast_run = fast_run->next;
			}
			return (fast_run);
		}
	}

	return (NULL);
}
