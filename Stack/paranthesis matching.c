#include<stdio.h>
#include<stdbool.h>
struct Node
{
    char data;
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
char pop()
{
    char x=-1;
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
        printf("%c",top->data);
        top=top->next;
    }
}
bool Isbalanced(char *a)
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')push(a[i]);
        else if(a[i]==')')
        {
            if(top==NULL)return false;
            else
            {
                pop();
            }
        }
    }
    return (top==NULL)?true:false;
}
int main()
{
    struct Node *st;
    char *a="()()()()()";
    printf("%d",Isbalanced(a));

    display();
}
