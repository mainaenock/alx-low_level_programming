#include "hash_tables.h"
/**
 * key_index - Function
 * @key: The key
 * @size: size of the array of hash table
 *
 * Return: The index at which the key/value pair should be stored
 * in the array of the table
 * Description: This function uses djb2 algorithm to calulate the key
 * index at which the key/value pair will be stored in the array of the
 * hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
