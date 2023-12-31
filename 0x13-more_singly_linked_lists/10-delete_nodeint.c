#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	if (current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
