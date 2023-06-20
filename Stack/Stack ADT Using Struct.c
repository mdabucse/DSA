#include<stdio.h>
struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    printf("Enter Size of The Stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}

void push(struct stack *st,int data)
{
    if(st->top==st->size-1)
        printf("The Stack Is Full\n");
    else
    {
        st->top++;
        st->s[st->top]=data;
    }
}

void pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("The Stack is Empty\n");
    else
    {
        x=st->s[st->top];
        st->top--;
    }
}
void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
        printf("%d--",st.s[i]);
}
int peek(struct stack st,int index)
{
    if(st.top-index+1<0)
        printf("Invalid index\n");
    else
    {
        return st.s[st.top-index+1];
    }
    return -1;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    //pop(&st);
    int pe=peek(st,4);
    printf("%d",pe);
    //display(st);
}
