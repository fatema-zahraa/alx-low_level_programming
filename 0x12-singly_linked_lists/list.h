#if !defined(LISTS_H)
#define LISTS_H
/**
 * struct list_s - singly linked list
 * @str: string - (dynamically allocated string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
// Define a new type for the list node
typedef struct list_s
{
        char *str; // String data
        unsigned int len; // String length
        struct list_s *next; // Pointer to next node
} 
        list_t; // Type name for the list node
// Declare some functions for the list operations
size_t print_list(const list_t *h); // Print the list
size_t list_len(const list_t *h); // Count the nodes in the list
list_t *add_node(list_t **head, const char *str); // Add a node at the head of the list
list_t *add_node_end(list_t **head, const char *str); // Add a node at the tail of the list
void free_list(list_t *head); // Free the list memory
#endif // End of header file guard
