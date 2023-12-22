#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *h_node;
	unsigned long int ind;

	if (ht == NULL ||  key == NULL ||  *key == '\0')
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);
	h_node = ht->array[ind];
	while (h_node && strcmp(h_node->key, key) != 0)
		h_node = h_node->next;

	return ((h_node == NULL) ? NULL : h_node->value);
}
