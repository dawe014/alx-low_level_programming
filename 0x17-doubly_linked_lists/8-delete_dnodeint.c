#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 * @head: Head of node
 * @index: index
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	list = *head;
	if (index == 0)
	{
		*head = list->next;
		if (list->next != NULL)
		{
			list->next->prev = NULL;
		}
		free(list);
		return (1);
	}
	for (i = 0; list != NULL && i < index - 1 ; i++)
	{
		list = list->next;
	}
	if (list == NULL || list->next == NULL)
	{
		return (-1);
	}

	if (list->next->next != NULL)
	{
		list->next = list->next->next;
		free(list->next->prev);
		list->next->prev = list;
		return (1);
	}
	else
	{
		free(list->next);
		list->next = NULL;
		return (1);
	}
	return (-1);
}
