#ifndef zhang_h
#define zhang_h

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>



typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
}Node;

typedef struct s_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void InitList(List *);
int Empty(List *);
void Push(List *,DataType x);
void Pop(List *);
int GetTop(List *);
int priority(char x);
double compute(double x,double y,char op);
void deal();

#endif
