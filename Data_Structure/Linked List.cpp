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

Node* del_first(Node *head)
{
    head = head->next;
    return head;
}
Node*  del_last(Node *head)
{
    Node *head1= head;
    while(head->next->next!=NULL)
    {
        head = head->next;
    }
    head->next=NULL;

    return head1;

}
void show(Node* view)
{
    while(view!=NULL)
    {
        cout<<view->data<<" ";
        view= view->next;
    }
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
int main()
{
    int n;
    cout<<"Enter the Number of Linked List"<<endl;
    cin>>n;
    Node* head = create_Node(n);
    Node* head1 = head;
    Node*  head2 = head;

    cout<<"All the Linked List Element: "<<endl;

    show(head);
    cout<<endl;

    cout<<"After Delete First Linked List Element: "<<endl;

    show(head);

    cout<<endl<<"After Delete Last Linked List Element: "<<endl;
    Node* head3 = del_last(head2);
    show(head3);

    cout<<endl<<"Add "<<endl;
    Node* head4 = addFirst(head,7);
    show(head4);

}
