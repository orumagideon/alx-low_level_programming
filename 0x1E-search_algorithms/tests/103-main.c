#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point to test exponential_search function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Testing exponential_search function with different values */
    printf("Searching for %d...\n", 62);
    printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));

    printf("Searching for %d...\n", 3);
    printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));

    printf("Searching for %d...\n", 999);
    printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999));

    return (EXIT_SUCCESS);
}
