#include <stdio.h>
#include "heron.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_list(t_cell *head)
{
    if (head == NULL)
       return;
    print_list(head->next);
    printf("%f ",head->elt);
}

int main()
{
    double p, u0;
    t_cell *head;

    u0 = 1;
    p = 35;
    printf("The Heron sequence until having convergence with an error equal to 10^(-7) is:\n");
    head = heron(p, u0);
    print_list(head); 
    printf("\n");
    return (0);
}
