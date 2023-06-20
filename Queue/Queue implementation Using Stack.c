#include<stdio.h>

struct stack1
{
    int top;
    int size;
    int *s;
};

struct stack2
{
    int top;
    int size;
    int *s;
};

void create1(struct stack1 *st)
{
    printf("Enter Size of  The stack\n");
    scanf("%d",&st->size);
    st->s=(int *)malloc(st->size*sizeof(int));
    st->top=-1;
}

void create2(struct stack1 *st)
{
    printf("Enter Size of  The stack\n");
    scanf("%d",&st->size);
    st->s=(int *)malloc(st->size*sizeof(int));
    st->top=-1;
}
