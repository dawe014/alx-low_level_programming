#include"lists.h"
/**
 * list_len - Counts the number of elements in linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
