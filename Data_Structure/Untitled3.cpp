#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* creatList(int n)
{
    node* head=NULL;
    node* temp;
    node* p;
    for(int i=0;i<n;i++)
    {
        temp=new node;
        cin>>temp->data;
        temp->next=NULL;

        if(head==NULL){
            head=temp;
        }
        else{
            p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;

        }

    }
    return head;
}

node* delFirst(node *head1)
{
    head1=head1->next;
    return head1;
}

node* delLast(node* head1)
{
    node* p=head1;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }

    p->next=NULL;
    return head1;
}
node* del(node* head,int x)
{
    node* p;
    node* prev;
    p=head;

    while(p->data!=x)
    {
        prev=p;
        p=p->next;
    }
    prev->next=p->next;

    return head;

}
int main()
{
    int n=3;
    node* head1=NULL;
    head1=creatList(n);
    node* p;

    node* head=head1;

    for(int i=0; i<n; i++)
    {
        cout<<head->data<<" ";
        head =  head->next;
    }
    cout<<endl;

    head1=delFirst(head1);


    p=head1;

    while(p!=NULL)
    {
        cout<<"-->"<<p->data;
        p=p->next;
    }

}
