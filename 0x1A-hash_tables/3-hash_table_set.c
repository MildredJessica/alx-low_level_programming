#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to update
 * @key: The string to add
 * @value: Associated with the key
 * Return: 1 if succeeded otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *tmp, *node;
unsigned int index;

if (ht == NULL || strlen(key) == 0 || value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];

if (tmp == NULL)
{
node = malloc(sizeof(hash_node_t *));
if (node == NULL)
return (0);
node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;
ht->array[index] = node;
return (1);
}
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
return (1);
}
tmp = tmp->next;
}
node = malloc(sizeof(hash_node_t *));
if (node == NULL)
return (0);
node->key = strdup(key);
node->value = strdup(value);
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
