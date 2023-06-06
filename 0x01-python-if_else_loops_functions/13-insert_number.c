#include "lists.h"

/**
 * insert_node - Inserts number to a sorted singly-linked list
 * @head: points the head of the linked list
 * @number: number to insert
 * Return: NULL if it fails
 *         Otherwise - points to new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *latest;

	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = number;

	if (node == NULL || node->n >= number)
	{
		latest->next = node;
		*head = latest;
		return (latest);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	latest->next = node->next;
	node->next = latest;

	return (latest);
}
