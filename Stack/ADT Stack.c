#include<stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int ele)
{
    if(top==size-1)
    {
        printf("The Stack Is Full\n");
    }
    else
    {
        top++;
        stack[top]=ele;
    }
}

int pop()
{
    int x;
    if(top==-1)
        printf("The Stack is Empty");
    else
    {
        x=stack[top];
        top--;
    }
    return x;
}
int peek()
{

}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d--",stack[i]);
    }
    printf("\n");
}
int main()
{
    push(10);
    display();
    printf("%d",pop());

}
