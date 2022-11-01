#include "insertion_sort.h"
#include "linked_list.h"

void sort(linked_list *llPtr)
{
 struct node *future, *current, *previous, *flex;
 /*points to the first unsorted node at the start*/
 previous = llPtr->head;
 current = llPtr->head;
 future = llPtr->head->next;
while (future != NULL)
{
    /*Starts sorting from the top of the list*/
    current = llPtr->head;
    previous = llPtr->head;
    current = future->next;
    /*sorts in case of the next unsorted being higher than the previous*/
    while (current->data <= future->data)
    {
        flex->next = current->next;
        current->next = future->next;
        previous->next=flex->next;
    }
    if(current != NULL)
    {
        llPtr->head = future;
        previous->next = future->next;
        future->next = current;
    }
    else
    {
    future->next = NULL;
    previous->next = future;
    }
    future = future->next;  
}
}
