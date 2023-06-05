#include "lists.h"

/**
 * check_cycle - a function that checks for loop in linked list
 * @list: a pointer that points head of linked list
 *
 * Description - check for loops in linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *quick;

	if (!list)
	{
		return (0);
	}
	slow = list;
	quick = list->next;
	while (quick && slow && quick->next)
	{
		if (slow == quick)
		{
			return (1);
		}
		slow = slow->next;
		quick = quick->next->next;
	}
	return (0);
}
