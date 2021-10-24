#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "heron.h"
#define alloc(t) (t *)malloc(sizeof(t))


/* Add element to the beginning of the list*/
t_cell *InitCell(double elt, t_cell *succ)
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
t_cell *heron(double p, double x0)
{
    t_cell *first = NULL;
    double x;
    first = InitCell(x0, first);
    
    x = 0.5 * (x0 + (p / x0));
    while ((fabs(x - x0)) > pow(10, -7))
    {
        x0 = x;
        x = 0.5 * (x + (p / x));
        first = InitCell(x0, first);
    }
    return first;
}
