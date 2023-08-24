#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @data_string: string - (malloc'ed string)
 * @length: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *data_string;
    unsigned int length;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *new_head);
size_t list_length(const list_t *new_head);
list_t *add_node(list_t **new_head, const char *data_string);
list_t *add_node_end(list_t **new_head, const char *data_string);
void free_list(list_t *new_head);

#endif

