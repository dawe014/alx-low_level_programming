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
	const listint_t *ptr;
	size_t i;

	ptr = malloc(sizeof(listint_t));
ptr = h;
	while (ptr != NULL)
	{
		i++;
	}
	return (i);
}
