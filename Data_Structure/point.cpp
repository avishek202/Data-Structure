#include<iostream>
using namespace std;

int main()
{
   int *p1,*p2,a=10;
   p2=&a;
   p1=p2;
   *p1=3;
   cout<<a;

}

