#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
