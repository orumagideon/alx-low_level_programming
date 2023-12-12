#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point to test jump_list function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Creating and printing the linked list */
    list = create_list(array, size);
    printf("Created List:\n");
    print_list(list);

    /* Testing jump_list function with different values */
    res = jump_list(list, size, 53);
    printf("Searching for %d... Found %d at index: %lu\n\n", 53, 53, res->index);

    res = jump_list(list, size, 2);
    printf("Searching for %d... Found %d at index: %lu\n\n", 2, 2, res->index);

    res = jump_list(list, size, 999);
    printf("Searching for %d... Result: Found at index: %p\n", 999, (void *)res);

    /* Freeing allocated memory for the list */
    free_list(list);
    return (EXIT_SUCCESS);
}
