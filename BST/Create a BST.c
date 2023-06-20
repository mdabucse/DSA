#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *l;
    int data;
    struct Node *r;
};

void insert(struct Node *root,int key)
{
    struct Node *t=NULL,*p=root,*q=NULL;
    if(root==NULL)
    {
        root=(struct Node *)malloc(sizeof(struct Node));
        root->data=key;
        root->l=root->r=NULL;
    }
    while(p)
    {
        q=p;
        if(p->data>key)
        {
            p=p->r;
        }
        else if(p->data<key)
            p=p->l;
        else
        return ;
    }
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->l=p->r=NULL;
    if(p->data>q->data)
        q->r=p;
    else
        q->l=p;

}
int main()
{
    struct Node*root=NULL;
    insert(root,10);
    insert(root,20);
}


