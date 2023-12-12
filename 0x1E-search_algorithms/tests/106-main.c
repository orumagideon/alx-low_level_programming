#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

/**
 * main - Entry point to test linear_skip function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    skiplist_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Creating and printing the skiplist */
    list = create_skiplist(array, size);
    printf("Created Skip List:\n");
    print_skiplist(list);

    /* Testing linear_skip function with different values */
    res = linear_skip(list, 53);
    printf("Searching for %d... Found %d at index: %lu\n\n", 53, 53, res->index);

    res = linear_skip(list, 2);
    printf("Searching for %d... Found %d at index: %lu\n\n", 2, 2, res->index);

    res = linear_skip(list, 999);
    printf("Searching for %d... Result: Found at index: %p\n", 999, (void *)res);

    /* Freeing allocated memory for the skiplist*/
    free_skiplist(list);
    return (EXIT_SUCCESS);
}
