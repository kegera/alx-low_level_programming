#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head;        // store pointer to current node
        head = head->next;  // move to next node
        free(temp->str);    // free string in current node
        free(temp);         // free current node
    }
}
