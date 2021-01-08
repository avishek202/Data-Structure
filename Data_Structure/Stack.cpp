#include<iostream>
using namespace std;
#define max_size 4
struct Stack
{
    int top=-1;
    int a[max_size];
};
void push(Stack *s,int item)
{
    if(s->top==max_size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        s->top+=1;
        //cout<<s->top;
        s->a[s->top]=item;
    }

}
void pull(Stack *s)
{

    if(s->top==-1)
    {
        cout<<"No element to delete or pull";
    }
    else
    {
        s->top-=1;
    }
}

int main()
{
    Stack s;

    push(&s,1);
    push(&s,2);
    push(&s,6);
    push(&s,9);
    pull(&s);
    push(&s,12);

    push(&s,13);

    for(int i=0; i<max_size; i++)
    {
        cout<<s.a[i]<<" ";
    }
    //cout<<s.top;
}
