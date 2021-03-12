#include<iostream>
using namespace std;
typedef struct Node node;
struct Node
{
    int data;
    Node* right;
    Node* left;
};

void add_left_child(node* parent,node* child)
{
  parent->left = child;
}
void add_right_child(node* parent,node* child)
{
  parent->right = child;
}

node* create_node(int item)
{
    node* new_node=(node *) malloc(sizeof(node));
    if(new_node==NULL)
        cout<<"Cann't create any node"<<endl;

    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}
Node* createTree()
{
    node* two = create_node(2);


    node* nine = create_node(9);

    add_right_child(two,nine);

    node* seven = create_node(7);

    add_left_child(two,seven);

    return two;
}

void pre_order(node* nodes)
{
    cout<<nodes->data<<" ";
    if(nodes->left!=NULL)
        pre_order(nodes->left);

    if(nodes->right!=NULL)
        pre_order(nodes->right);
}

int main()
{
    node* root=createTree();
    cout<<"pre_Order traverse :"<<endl;
    pre_order(root);


}
