#include<iostream>
using namespace std;

typedef struct node Node;
struct node
{
    int data;
    Node* next;
};

Node* createLinked(int n)
{
    Node* head=NULL;
    Node* p;
    Node* temp;
    for(int i=0; i<n; i++)
    {
        temp= new Node;
        cin>>temp->data;
        temp->next=NULL;

        if(head==NULL)
            head=temp;
        else
        {
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
void show(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}
int main()
{
    Node *head,*p,*temp;
    p=createLinked(3);
    head=p;
    temp=p;
    Node *head0,*head1,*head2;

    while(head!=NULL)
    {

        if(head->data==0)
        {
            head0=new Node;
            head0->data=0;
            // head=head0;

        }
        else if(head->data==1)
        {
            head1=new Node;
            head1->data=8;

            //head0->next=head1;

        }
        else if(head->data==2)
        {
            head2=new Node;
            head2->data=2;

            // head1->next=head2;
        }
        head=head->next;
    }
    temp=head0;
    temp->next=head1;
    head1->next=head2;
    p=temp;
    // cout<<head2->data;
    show(p);







}
