# - Hash tables
## Project Requirements
- Formatted with Betty style standards
- Compiled with gcc 4.8.4 (C90) using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- No global variables
- No more than 5 functions per file
- Function prototypes should be included in header file called `hash_tables.h`

### Project Data Structure
    /**
     * struct hash_node_s - Node of a hash table
     *
     * @key: The key, string
     * The key is unique in the HashTable
     * @value: The value corresponding to a key
     * @next: A pointer to the next node of the List
     */
    typedef struct hash_node_s
    {
         char *key;
         char *value;
         struct hash_node_s *next;
    } hash_node_t;

    /**
     * struct hash_table_s - Hash table data structure
     *
     * @size: The size of the array
     * @array: An array of size @size
     * Each cell of this array is a pointer to the first node of a linked list,
     * because we want our HashTable to use a Chaining collision handling
     */
    typedef struct hash_table_s
    {
         unsigned long int size;
         hash_node_t **array;
    } hash_table_t;

## File Descriptions
**0-hash_table_create.c:** a function that creates a hash table

**1-djb2.c:** a hash function implementing the djb2 algorithm

**2-key_index.c:** a function that gives you the index of a key

**3-hash_table_set.c:** a function that adds an element to the hash table

**4-hash_table_get.c:** a function that retrieves a value associated with a key

**5-hash_table_print.c:** a function that prints a hash table

**6-hash_table_delete.c:** a function that deletes a hash table

## Author
*Sonia Ben Saâd* - [Github](https://github.com/Soniabensaad)