#ifndef HERON_H_
#define HERON_H_
typedef struct sCell
{
    int elt;
    struct sCell *next;
} t_cell;

t_cell *Init_cell(double elt, t_cell *succ); 

void PrintList(t_cell *first);

int listLength(t_cell *first);

void FreeList(t_cell *first);
t_cell *Fibonnaci(); 
double gold_number(t_cell *head);
#endif