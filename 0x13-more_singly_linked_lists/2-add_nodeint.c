#include "lists.h"

/**
 * add_nodeint - function adds a new node at the neginning of a list
 * @head: pointer to the head pointer
 * @n: new integer to be created
 * Return: the head to the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
