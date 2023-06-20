#include<stdio.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q
};
void create(struct Queue *p)
{

    printf("Enter Size Of The QUEUE\n");
    scanf("%d",&p->size);
    p->front=p->rear=0;       //In The Normal Queue We initialized =-1 but in this case we initialize to 0
    p->Q=(int *)malloc(p->size*sizeof(int));
}
void enQueue(struct Queue *p,int ele)
{
    if((p->rear+1)%p->size==p->front)
        printf("The Queue is FULL!!\n");
    else
    {
        p->rear=(p->rear+1)%p->size;
        p->Q[p->rear]=ele;
    }
}
int deQueue(struct Queue *p)
{
    int x=-1;
    if((p->front+1)%p->size==p->rear)
        printf("The Queue is EMPTY!!\n");
    else
    {
        p->front=(p->front+1)%p->size;
        x=p->Q[p->front];
    }
    return x;
}
void display(struct Queue p)
{
    for(int i=p.front+1;i<=p.rear;i++)  //Array oda 0th Index La namma ethaiyum store panna matom so front+1 Kudukurom
        printf("%d--",p.Q[i]);          //Next Varum pothu Enqueue panna antha space use aagum
}
int main()
{
    struct Queue st;
    create(&st);
    enQueue(&st,10);
    enQueue(&st,20);
    printf("The Dequeued Value is %d\n",deQueue(&st));
    display(st);

}

