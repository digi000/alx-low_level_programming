#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned char *k1;
	char *k2;
	unsigned long int index;

	if (!key || !value)
		return (0);
	k1 = (unsigned char*)strdup(key);
	k2 = strdup(key);
	index = hash_djb2(k1) % ht->size;
	item  = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = k2;
	item->value = strdup(value);
	ht->array[index] = item;
	return 1;
}
