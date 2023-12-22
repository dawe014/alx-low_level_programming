#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h_node;
	unsigned long int ind;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (ind = 0; ind < ht->size; ind++)
	{
		if (ht->array[ind] != NULL)
		{
			if (c_flag == 1)
				printf(", ");
			h_node = ht->array[ind];
			while (h_node != NULL)
			{
				printf("'%s': '%s'", h_node->key, h_node->value);
				h_node = h_node->next;
				if (h_node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
