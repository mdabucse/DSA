#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int *a,int n)
{
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node ));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void removeDuplicates()
{
    struct Node *p=first;
    while(p && p->next)
    {
        if(p->data==p->next->data)
        {
            p->next=p->next->next;
        }
        else
        {
            p=p->next;
        }
    }
}
void display()
{
    struct Node *p=first;
    while(p)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL\n");
}

int main()
{
    int a[]={1,2,2,2,2,2,3};
    create(a,7);
    display();
    removeDuplicates();
    display();
    return 0;
}

