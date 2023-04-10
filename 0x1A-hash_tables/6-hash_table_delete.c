#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *tmp;

if (ht == NULL || ht->size == NULL || ht->array == NULL)
return (NULL);
for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht[i]->array = tmp;
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
