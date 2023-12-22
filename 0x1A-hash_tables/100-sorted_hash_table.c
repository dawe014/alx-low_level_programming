#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;
	return (hash_t);
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n_node, *tmp;
	char *v_copy;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = v_copy;
			return (1);
		}
		tmp = tmp->snext;
	}
	n_node = malloc(sizeof(shash_node_t));
	if (n_node == NULL)
	{
		free(v_copy);
		return (0);
	}
	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(v_copy);
		free(n_node);
		return (0);
	}
	n_node->value = v_copy;
	n_node->next = ht->array[ind];
	ht->array[ind] = n_node;

	if (ht->shead == NULL)
	{
		n_node->sprev = NULL;
		n_node->snext = NULL;
		ht->shead = n_node;
		ht->stail = n_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n_node->sprev = NULL;
		n_node->snext = ht->shead;
		ht->shead->sprev = n_node;
		ht->shead = n_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		n_node->sprev = tmp;
		n_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = n_node;
		else
			tmp->snext->sprev = n_node;
		tmp->snext = n_node;
	}
	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *h_node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);
	h_node = ht->shead;
	while (h_node != NULL && strcmp(h_node->key, key) != 0)
		h_node = h_node->snext;
	return ((h_node == NULL) ? NULL : h_node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *h_node;

	if (ht == NULL)
		return;
	h_node = ht->shead;
	printf("{");
	while (h_node != NULL)
	{
		printf("'%s': '%s'", h_node->key, h_node->value);
		h_node = h_node->snext;
		if (h_node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *h_node;

	if (ht == NULL)
		return;
	h_node = ht->stail;
	printf("{");
	while (h_node != NULL)
	{
		printf("'%s': '%s'", h_node->key, h_node->value);
		h_node = h_node->sprev;
		if (h_node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *h_node, *tmp;

	if (ht == NULL)
		return;
	h_node = ht->shead;
	while (h_node)
	{
		tmp = h_node->snext;
		free(h_node->key);
		free(h_node->value);
		free(h_node);
		h_node = tmp;
	}
	free(head->array);
	free(head);
}
