C - Dynamic Memory Allocation

####TASKS

####0. Float like a butterfly, sting like a bee

Create an array of characters and initialize it with a specific character using a function.

Prototype: char *create_array(unsigned int size, char c);

Returns NULL if the size is zero

Returns a pointer to the array created or NULL if it fails

####1. The woman who has no imagination has no wings

Return a pointer to a new space in memory that contains a copy of the string provided using a function.

Prototype: char *_strdup(char *str);

The _strdup() function returns a pointer to a new string that is a duplicate of the string str. The memory for the new string is allocated with malloc, and can be freed with free.

Returns NULL if str is NULL

Returns a pointer to the duplicated string on success or NULL if there was not enough memory available.

2. He who is not courageous enough to take risks will accomplish nothing in life
Concatenate two strings and return a pointer to the newly allocated memory using a function.

Prototype: char *str_concat(char *s1, char *s2);

The returned pointer should point to a new space in memory that contains the contents of s1, followed by the contents of s2, and be null-terminated

If either s1 or s2 is NULL, treat it as an empty string

The function should return NULL on failure

####3. If you even dream of beating me you'd better wake up and apologize

Return a pointer to a two-dimensional array of integers with a specified width and height using a function.

Prototype: int **alloc_grid(int width, int height);

Each element of the grid should be initialized to 0

Returns NULL on failure

If width or height is 0 or negative, return NULL

####4. It's not bragging if you can back it up

Free a two-dimensional grid created by your alloc_grid function using a function.

Prototype: void free_grid(int **grid, int height);

Note that we will compile with your alloc-grid.c file. Make sure it compiles.

####5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Concatenate all the arguments of your program and return a pointer to the newly allocated memory using a function.

Prototype: char *argstostr(int ac, char **av);

Returns NULL if ac is zero or av is NULL

Returns a pointer to a new string on success or NULL if there was not enough memory available

Each argument should be followed by a newline character in the new string

####[6. I will show you how great I am] (101-strtow.c)

Split a string into words and return a pointer to an array of strings using a function.

Prototype: char **strtow(char *str);

The function returns a pointer to an array of strings (words)

Each element of this array should contain a single word, null-terminated

The last element of the returned array should be NULL

Words are separated by spaces

Returns NULL if str is NULL or empty

If the function fails, it should return NULL
