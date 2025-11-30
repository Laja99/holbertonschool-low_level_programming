# Doubly linked lists

## Project Overview
This project focuses on implementing **doubly linked lists** in C.  
You will create functions to traverse, add, delete, and free nodes while maintaining both `prev` and `next` pointers.

## Data Structure

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to previous node
 * @next: pointer to next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

## Learning Objectives
By the end of this project, you should be able to explain:
- What a doubly linked list is  
- How to use and manipulate doubly linked lists  
- How to find the right information source independently  

## Requirements
- Ubuntu 20.04 LTS  
- Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`  
- **Betty style** mandatory  
- No global variables  
- Max **5 functions per file**  
- Allowed functions: `malloc`, `free`, `printf`, `exit`  
- All prototypes in `lists.h`  
- Header files must be include-guarded  
- Must push **README.md**

## Files

| File | Description |
|------|-------------|
| 0-print_dlistint.c | Print all elements of a doubly linked list |
| 1-dlistint_len.c | Return number of nodes |
| 2-add_dnodeint.c | Add a new node at the beginning |
| 3-add_dnodeint_end.c | Add a new node at the end |
| 4-free_dlistint.c | Free the list |
| 5-get_dnodeint.c | Get node at a given index |
| 6-sum_dlistint.c | Sum all nodes' data |
| 7-insert_dnodeint.c | Insert node at a given position |
| 8-delete_dnodeint.c | Delete node at a given index |
| lists.h | Struct + all prototypes |

## Example Usage
```c
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint(&head, 5);
    add_dnodeint_end(&head, 10);
    print_dlistint(head);
    free_dlistint(head);
    return (0);
}
```
