#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int ele)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=ele;
    if(t==NULL)
        printf("The Stack is Full");
    else
    {

        t->next=top;
        top=t;
    }
}
int pop()
{
    int x=-1;
    if(top==NULL)
        printf("The Stack Is Empty");
    else
    {
        struct Node *p;
        p=top;
        x=top->data;
        top=top->next;
        free(p);
    }
        return x;
}
int peek(int pos)
{
    struct Node *p=top;
    for(int i=1;i<pos;i++)
        p=p->next;
    return p->data;
}
void display()
{
    while(top)
    {
        printf("%d",top->data);
        top=top->next;
    }
}
int main()
{
    struct Node *st;
    push(10);
    push(20);
    //printf("The Poped value is %d\n",pop());
    printf("The Value is %d\n",peek(1));
    display();
}
