#include "hash_tables.h"

/**
 * hash_djb2 - hashing function
 * @str: string used to generate hash value
 *
 * Return: hashed index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    for (c = *str++; c; c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return (hash);
}