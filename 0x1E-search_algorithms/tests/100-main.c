#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point to test jump_search function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Testing jump_search function with different values */
    printf("Searching for %d...\n", 6);
    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));

    printf("Searching for %d...\n", 1);
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));

    printf("Searching for %d...\n", 999);
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));

    return (EXIT_SUCCESS);
}
