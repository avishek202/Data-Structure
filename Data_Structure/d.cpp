#include<iostream>
using namespace std;

void change(int a[])
{
    a[3]=12;
}

void print(int *a)
{
    for(int i=0;i<5;i++)
        cout<<*(a+i)<<" ";
        cout<<endl;
}

int main()
{
  int a[]={1,2,3,4,5};
  print(a);
  change(a);
  print(a);


}
