#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point to test binary_search function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Testing binary_search function with different values */
    printf("Searching for %d...\n", 2);
    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));

    printf("Searching for %d...\n", 5);
    printf("Found %d at index: %d\n\n", 5, binary_search(array, size, 5));

    printf("Searching for %d...\n", 999);
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));

    return (EXIT_SUCCESS);
}
