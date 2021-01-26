#include<iostream>
using namespace std;

typedef struct node Node;
struct node
{

    int data;
    Node *next;
};

Node* create_Node(int n)
{
    Node* temp;
    Node* head=NULL;
    Node* p;
    for(int i=0; i<n; i++)
    {
        temp = new Node;
        cin>>temp->data;
        temp->next=NULL;

        if(head==NULL)
            head=temp;
        else
        {

            p = head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;

        }

    }
    return head;
}

Node* del_first(Node *head1)
{
    head1 = head1->next;
    return head1;
}

Node*  del_last(Node *head)
{
    Node *head1= head;
    while(head1->next->next!=NULL)
    {
        head1 = head1->next;
    }
    head1->next=NULL;

    return head;

}
void show(Node* view)
{
    while(view!=NULL)
    {
        cout<<view->data<<" ";
        view= view->next;
    }
    cout<<endl;
}

Node* addFirst(Node* head,int item)
{
    Node* temp;
    temp = new Node;
    temp->data=item;
    temp->next = head;
    head = temp;

    return head;
}
Node* addLast(Node* head,int item)
{
    Node* temp =new  Node;
    temp->data=item;
    temp->next=NULL;

    Node* head1 =  head;

    int c=0;
    while(head1->next!=NULL)
    {
        head1 = head1->next;
        c++;
    }
    head1->next=temp;
    cout<<c<<endl;

    return head;


}
int main()
{
    int n;
    cout<<"Enter the Number of Linked List"<<endl;
    cin>>n;
    Node* head = create_Node(n);
    //Node* head1 = head;
    //Node*  head2 = head;

    cout<<"All the Linked List Element: "<<endl;

    show(head);
    //cout<<endl;

    cout<<"After Delete First Linked List Element: "<<endl;

    //show(head);
    Node* head6 = del_first(head);
    show(head6);
    show(head);



    cout<<endl<<"After Delete Last Linked List Element: "<<endl;
    Node* head3 = del_last(head);
    show(head3);

    show(head);






    /*cout<<endl<<"Add to First: "<<endl;
    Node* head4 = addFirst(head,7);
    show(head4);

   cout<<endl;
    cout<<"dd"<<endl;
     show(head);
     cout<<endl;
    cout<<"Add to Last: "<<endl;
    Node* head5 = addLast(head,9);
    show(head5);*/


}
