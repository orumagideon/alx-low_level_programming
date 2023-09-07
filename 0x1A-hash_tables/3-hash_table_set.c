#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value in.
 * @key: The key (string). Key cannot be an empty string.
 * @value: The value associated with the key. Value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current_node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    /* Check for collisions by traversing the linked list at the index */
    current_node = ht->array[index];
    while (current_node != NULL)
    {
        /* If the key already exists, update its value */
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value); /* Free the old value */
            current_node->value = strdup(value); /* Duplicate and set the new value */
            if (current_node->value == NULL)
                return (0); /* Memory allocation failure */
            return (1); /* Successfully updated the value */
        }
        current_node = current_node->next;
    }

    /* Create a new node and add it at the beginning of the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0); /* Memory allocation failure */

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0); /* Memory allocation failure */
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0); /* Memory allocation failure */
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1); /* Successfully added the key/value pair */
}
