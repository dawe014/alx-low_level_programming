#include"lists.h"
#include<stdlib.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the linked list
 * @str: The string to be duplicated and added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));
char *str_copy = strdup(str);

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = strlen(str_copy);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
