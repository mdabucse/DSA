#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *q;         //Array
};
void create(struct queue *Q)
{
    //Initialize For All Structure Elements

    printf("Enter The Size of The Queue\n");
    scanf("%d",&Q->size);
    Q->front=-1;
    Q->rear=-1;
    Q->q=(int *)malloc(Q->size*sizeof(int));
}
void enQueue(struct queue *Q,int x)
{
    if(Q->rear==Q->size-1)
        printf("The Queue is FULL\n");
    else
    {
        Q->rear++;
        Q->q[Q->rear]=x;
    }
}
int deQueue(struct queue *Q)
{
    int x=-1;
    if(Q->rear==Q->front)
        printf("The Queue is Empty\n");
    else
    {
        Q->front++;
        x=Q->q[Q->front];
    }
    return x;
}
void display(struct queue Q)
{
    for(int i=Q.front+1;i<=Q.rear;i++)
        printf("%d<--",Q.q[i]);
}
int main()
{
    struct queue Q;
    create(&Q);
    enQueue(&Q,10);
    enQueue(&Q,20);
    enQueue(&Q,30);
    enQueue(&Q,40);
    printf("The Dequeued Valuye Is %d\n",deQueue(&Q));
    display(Q);
}
