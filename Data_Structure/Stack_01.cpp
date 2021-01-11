#include<iostream>
using namespace std;
#define a_size 5
struct stk
{
    int a[a_size];
    int top=-1;
    int c1=0;
};

void push(stk *s,int item)
{

    s->top++;
    if(s->top==a_size)
    {
        cout<<"Stack is full"<<endl;
    }
    else

    {
        s->a[s->top]=item;
        s->c1++;

    }
    cout<<"All elements: "<<endl;
    for(int i=0; i<s->c1; i++)
        cout<<s->a[i]<<" ";
    cout<<endl;
    cout<<"Pop elements: "<<s->a[0]<<endl;

}
void pop(stk *s)
{
    if(s->top<0)

    {
        cout<<"Nothing to pop"<<endl;
        cout<<"No top Elements"<<endl;

    }
    else
    {
        s->top-=1;
        s->c1--;
        cout<<"All elements: "<<endl;
        for(int i=0; i<s->c1; i++)
            cout<<s->a[i]<<" ";
        cout<<endl;
        cout<<"d: "<<s->top<<endl;
        cout<<"Top elements: "<<s->a[0]<<endl;
    }


}
void add(stk *s)
{
    int sum=0;
    for(int i=0; i<s->c1; i++)
    {
        sum+=s->a[i];
    }
    cout<<sum<<endl;
}
int main()
{

    stk s;
    int c;


    while(1)
    {
        cout<<"Selection"<<endl;
        cin>>c;
        if(c==1)
            pop(&s);
        else if(c==2)
        {
            cout<<"Enter the number you want to push"<<endl;
            int a1;
            cin>>a1;
            push(&s,a1);
        }

        else  if(c==3)
            add(&s);
        else if(c==4)
            break;
    }
}
