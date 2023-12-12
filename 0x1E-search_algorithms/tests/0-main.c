#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point to test linear_search function
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Testing linear_search function with various values */
    printf("Searching for %d...\n", 3);
    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));

    printf("Searching for %d...\n", 42);
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));

    printf("Searching for %d...\n", 999);
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

    return (EXIT_SUCCESS);
}
