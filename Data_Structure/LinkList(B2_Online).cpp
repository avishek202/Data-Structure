#include<iostream>
using namespace std;
typedef struct node Node;
struct node
{
    int  data;
    Node* next;

};
Node* createNode(int n)
{
    Node* temp;
    Node* head=NULL;
    Node* p;
    int data;
    cout<<"Enter The Node data: "<<'\n';
    for(int i=0; i<n; i++)
    {
        temp = new Node;
        std::cin>>temp->data;
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
    cout<<"All Linked List Element: "<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* add_between_two_value(Node* head,int a,int b,int item)
{
    Node* temp;
    temp= new Node;
    temp->data=item;
    Node* p;
    Node* p1,*p2;
    p=head;
    while(p!=NULL)
    {
        if(p->data==a)
        {
            p1=p;
        }
        if(p->data==b)
        {
            p2=p;
        }
        p=p->next;

    }
    p1->next=temp;
    temp->next=p2;
    //p2->next=NULL;

    return head;

}
Node* Convert_to_circular(Node* head)
{
    Node*  temp1 = head;
    Node*  p = head;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = temp1;

    return head;


}
void  converted_circular_show(Node* head2)
{
    Node* head = head2;
    int c=0;
    while(1)
    {
        while(head2->next!=head)
        {
            cout<<head2->data<<" ";
            head2=head2->next;

        }

        cout<<head2->data<<endl;

        if(head2->next==head)
        {
            c++;
            head2=head2->next;
        }
        if(c>2)
            break;
    }
}
int main()
{
    cout<<"Please Enter All the numbers of Linked List: "<<'\n';
    int n;
    cin>>n;
    Node* head = createNode(n);
    show(head);
    Node* head2 = add_between_two_value(head,3,5,4);
    show(head2);
    cout<<"After Converting Circular Link List"<<endl;
    Node* head3 = Convert_to_circular(head2);
    converted_circular_show(head3);
}








