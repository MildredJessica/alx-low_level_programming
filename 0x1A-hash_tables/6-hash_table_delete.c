#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int idx;
hash_node_t *tmp;

if (ht == NULL || ht->size == NULL || ht->array == NULL)
return (NULL);
for (idx = 0; idx < ht->size; idx++)
{
tmp = ht->array[idx]->next;
free(ht->array[idx]->key);
free(ht->array[idx]->value);
free(ht->array[idx]);
ht->array[idx] = tmp;
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
