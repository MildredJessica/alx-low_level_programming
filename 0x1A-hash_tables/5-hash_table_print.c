#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *tmp;
unsigned long int i;
char flag = 0;

if (ht == NULL || ht->array == NULL)
{
printf("{}");
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i];
while (tmp != NULL)
{
if (flag == 1)
printf(", ");
printf("My key is %s:\n", tmp->key);
printf("'%s' : '%s'", tmp->key, tmp->value);
flag = 1;
tmp = tmp->next;
}
}
printf("}\n");
}
