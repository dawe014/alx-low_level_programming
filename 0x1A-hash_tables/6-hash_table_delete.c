#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *h_node, *tmp;
	unsigned long int ind;

	for (ind = 0; ind < ht->size; ind++)
	{
		if (ht->array[ind] != NULL)
		{
			h_node = ht->array[ind];
			while (h_node != NULL)
			{
				tmp = h_node->next;
				free(h_node->key);
				free(h_node->value);
				free(h_node);
				h_node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
