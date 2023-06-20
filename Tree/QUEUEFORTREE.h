#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *l,*r;
}*root=NULL;

struct queue
{
    int front;
    int rear;
    int size;
    struct Node **p;
}q;

void QueueCreation()
{
    struct queue q;
    printf("Enter The size of the Queue");
    scanf("%d",&q->size);
    q->p=(struct Node *)malloc(q->size*sizeof(struct Node));
    q->front=q->rear=-1;

}
int main()
{
    QueueCreation()l;
    return 0;
}
