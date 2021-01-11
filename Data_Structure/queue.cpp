#include<iostream>
using namespace std;
#define q_size 5

struct queu
{
    int a[q_size+1];
    int head=0,tail=0;
    int c=0;
};

void enqueue(queu *q,int item)
{
    if((q->tail+1)%(q_size+1)==q->head)
        cout<<"queue is fulled"<<endl;


    else
    {

        q->a[q->tail]=item;

        q->tail=(q->tail+1)%(q_size+1);
        q->c++;
    }

}
void dequeue(queu *q)
{
    if(q->tail==q->head) cout<<"empty"<<endl;
    else
    {
        q->head=(q->head+1)%(q->head);
    }
}

int main()
{
    queu q;
    // cout<<"Enter the number to push";
    //int item;
    //cin>>item;
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,2);
    enqueue(&q,3);
     enqueue(&q,5);
    // enqueue(&q,4);
    // cout<<q.tail;
    for(int i=0; i<5; i++)
        cout<<q.a[i]<<" ";
}
