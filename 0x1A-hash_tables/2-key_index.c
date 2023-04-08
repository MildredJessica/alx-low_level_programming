#include "hash_tables.h"

/**
 * key_index - Gives the index of  key
 * @key: Character to search for
 * @size: Size of the hashtable
 * Return: The key at which the key is stored in the hastable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

index = hash_djb2(key) % size;
return (index);
}
