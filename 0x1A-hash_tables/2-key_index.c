#include "hash_tables.h"

/**
 * key_index - Gives the index of  key
 * @key: Character to search for
 * @size: Size of the hashtable
 * Returns: The key at which the key os stored in the hastable
 */ 
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long index;

index = hash_djb2(key) % size;
return (index);
}
