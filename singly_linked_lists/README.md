#  Singly linked lists

## Description
This project focuses on implementing and using **singly linked lists** in C.  
You will learn when to prefer linked lists over arrays, how to build and traverse lists, and how to manage memory correctly.

---

## Learning Objectives
By the end of this project you should be able to:
- Explain when and why to use linked lists vs arrays.
- Build and use singly linked lists.
- Dynamically allocate and free nodes safely.
- Implement basic linked-list operations (add, append, count, print, free).

---

## Requirements
- **Allowed editors:** `vi`, `vim`, `emacs`
- **Compiler:** `gcc` on Ubuntu 20.04 LTS
- **Compilation flags:**  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line.
- Follow **Betty** style; code will be checked with `betty-style.pl` and `betty-doc.pl`.
- No global variables.
- **No more than 5 functions per file.**
- Only allowed C standard library functions: `malloc`, `free`, `exit`.
- `_putchar` is allowed (do not push your own `_putchar.c`).
- Prototypes and the `_putchar` prototype must be in `lists.h`.
- Header files must be include-guarded.

---

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
## Files

| File | Description |
|------|-------------|
| 0-print_list.c | Prints all elements of the list |
| 1-list_len.c | Returns number of nodes |
| 2-add_node.c | Adds a new node at the beginning |
| 3-add_node_end.c | Adds a new node at the end |
| 4-free_list.c | Frees the list |
| lists.h | Struct + prototypes |

## Usage Example
```c
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node_end(&head, "World");
    print_list(head);
    free_list(head);
    return (0);
}
```
