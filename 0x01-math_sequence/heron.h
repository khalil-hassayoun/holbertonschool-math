#ifndef HERON_H_
#define HERON_H_
typedef struct sCell
{
    double elt;
    struct sCell *next;
} t_cell;

t_cell *Init_cell(double elt, t_cell *succ); 

void PrintList(t_cell *first);

int listLength(t_cell *first);

void FreeList(t_cell *first);
t_cell *heron(double p, double x0);
#endif