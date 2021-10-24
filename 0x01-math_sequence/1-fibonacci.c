#include <stdio.h>
#include "fibonacci.h"
#include <math.h>
#include <stdlib.h>
#define alloc(t) (t *)malloc(sizeof(t))


/* Add element to the beginning of the list*/
t_cell *InitCell(int elt, t_cell *succ)
{
    t_cell *cell = alloc(t_cell);
    cell->elt = elt;
    cell->next = succ;
    return cell;
}


 /* Function to return the length of the linked list */
int listLength(t_cell *first)
{
    t_cell *cur = first;
    int size = 0;
    while (cur != NULL)
    {
        ++size;
        cur = cur->next;
    }
    return size;
}

 /* Free nodes in linked list */
void FreeList(t_cell *first)
{
    t_cell *head = first, *next;

    while (NULL != head)
    {
        next = head->next;
        free(head);
        head = next;
    }

}
t_cell *Fibonnaci()
{
    int f1, f2, f3,n = 0;
    t_cell *first = NULL;
    f1 = 1;
    f2 = 1;
    f3 = f2 + f1;
    first = InitCell(f1, first);
    first = InitCell(f2, first);
    first = InitCell(f3, first);    
    while ((n < 1000) && ((fabs((f3 / (float)f2) - (f2 / (float)f1))) > pow(10, -7)))
    {
        f1 = f2;
        f2 = f3;
        f3 = f3 + f1;
        first = InitCell(f3, first);
        n++;
    }
    if (n == 1000 && ((fabs((f3 / (float)f2) - (f2 / (float)f1))) > pow(10, -7)))
    {
        return NULL;
    }
    else
    {
        return first;
    }
}
double gold_number(t_cell *head)
{
    if (head == NULL || listLength(head) - 3 == 1000)
        return -1;

    else if (head->next != NULL)
    {
        t_cell *tmp = head->next;
        return (head->elt / (float)tmp->elt);
    }
    else
        return -1;
}