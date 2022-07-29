#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: print the key/value
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *hash_d = NULL;
    unsigned long int i = 0;
    int flag = 1;

    if (!ht || !ht->array)
        return;
    putchar('{');
    while (i < ht->size)
    {
        hash_d = ht->array[i];
        while (hash_d)
        {
            if (flag == 0)
            {
                printf(", ");
            }
            printf("'%s': '%s'", hash_d->key, hash_d->value);
            hash_d = hash_d->next;
            flag = 0;
        }
        i++;
    }
    putchar('}');
    putchar('\n');
}
