#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point to test interpolation_search function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    int array[] = {
        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Testing interpolation_search function with different values */
    printf("Searching for %d...\n", 3);
    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));

    printf("Searching for %d...\n", 7);
    printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));

    printf("Searching for %d...\n", 999);
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));

    return (EXIT_SUCCESS);
}
