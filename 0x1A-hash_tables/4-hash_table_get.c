#include "hash_tables.h"


/**
 * hash_table_get - Retrieves a value associated with the key
 * @ht: The hash table to look
 * @key: The key to search for
 * Return: The value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *temp;
unsigned long int index;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
return (NULL);
}
