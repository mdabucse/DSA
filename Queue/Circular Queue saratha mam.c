#include<stdio.h>
#define size 5

int q[size];
int rear=0,front=0;

void enQueue(int ele)
{
    if(rear==size-1 && front==0)
    {
        printf("The Queue is FULL\n");
        return;
    }

    else
    {
        rear++;
        q[rear]=ele;
    }
}
int main()
{

}
