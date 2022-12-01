#include "insertion_sort.h"
#include "linked_list.h"

void sort(linked_list *llPtr)
{
struct node *current, *previous, *flex;
/*points to the first unsorted node at the start*/
previous = llPtr->head;
current = llPtr->head->next;

while (current != NULL)
    {
    /*sorts in case of the next unsorted being higher than the previous*/
    if (previous->data > current->data)
        {

        if (previous == llPtr->head)
            {
            previous->next = current->next;
            current->next = previous;
            llPtr->head = current;
            }

        else
            {
            flex = llPtr->head;

            if (current->data < flex->data)
                {
                previous->next = current->next;
                current->next = flex;
                llPtr->head = current;
                }

            else
                {
                while (flex->next->data <= current->data)
                {
                    flex = flex->next;
                }
           /* if (flex->next->next == current)
                {
                flex->next->next = current->next;
                current->next = flex->next;
                flex->next = current;
                }*/
                
                previous->next = current->next;
                current->next = flex->next;
                flex->next = current;
                }
            }
            current = previous->next;
        }
        else
        {
        previous = current;
        current = previous->next;
        }
    }   
    return;
}