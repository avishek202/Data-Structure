#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *p1,*p2;
    p1=&a;
    p2=p1;
    *p2=5;
    cout<<a;
}
