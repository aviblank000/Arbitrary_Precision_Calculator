#ifndef CAL_H
#define CAL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct d_node
{
    int data;
    struct d_node *prev;
    struct d_node *next;
} Dlist;

typedef struct s_node
{
    int data;
    struct s_node *link;
} Slist;

int dl_insert_last(Dlist **head, Dlist **tail, int data);
int sl_insert_at_first(Slist **head, int data);
void print_list_double(Dlist *head);
void print_list_single(Slist *head);
int my_atoi(const char [], Dlist **head, Dlist **tail);
int add(Dlist *head1, Dlist *tail1, Dlist *head2, Dlist *tail2, Slist **res);
int sub(Dlist *head1, Dlist *tail1, Dlist *head2, Dlist *tail2, Slist **res);
int divi(char *op, char op1, char op2, char **argv,Dlist **h1, Dlist **t1, Dlist **h2, Dlist **t2, Slist **res);
char check_op_sub(char *op, char op1, char op2, char **argv, Dlist **h1, Dlist **t1, Dlist **h2, Dlist **t2);
int sub_div(Dlist *head1, Dlist *tail1, Dlist *head2, Dlist *tail2, Dlist **hr, Dlist **tr);
int dl_insert_first(Dlist **head, Dlist **tail, int data);
#endif 
