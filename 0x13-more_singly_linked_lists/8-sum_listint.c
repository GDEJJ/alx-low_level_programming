#include "lists.h"

/**
 * sum_listint - function that sums all of the data in a linked list
 * @head: pointer to the head
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
