#include "lists.h"
/**
 * sum_dlistint - sums all of the data of a linked list
 * @head: pointer to the beginning of the linked list
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
