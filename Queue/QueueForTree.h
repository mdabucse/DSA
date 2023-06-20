#ifndef QUEUEFORTREE_H_INCLUDED
#define QUEUEFORTREE_H_INCLUDED
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q
};
void create(struct Queue *p)
{

    printf("Enter Size Of The QUEUE\n");
    scanf("%d",&p->size);
    p->front=p->rear=0;       //In The Normal Queue We initialized =-1 but in this case we initialize to 0
    p->Q=(Node **)malloc(p->size*sizeof(Node *));
}
void enQueue(struct Queue *p,Node *ele)
{
    if((p->rear+1)%p->size==p->front)
        printf("The Queue is FULL!!\n");
    else
    {
        p->rear=(p->rear+1)%p->size;
        p->Q[p->rear]=ele;
    }
}
Node *deQueue(struct Queue *p)
{
    Node *x=NULL;
    if((p->front+1)%p->size==p->rear)
        printf("The Queue is EMPTY!!\n");
    else
    {
        p->front=(p->front+1)%p->size;
        x=p->Q[p->front];
    }
    return x;
}

int isEmpty(struct Queue p)
{
    return p.front==p.rear;
}

#endif // QUEUEFORTREE_H_INCLUDED
