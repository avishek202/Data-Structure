#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
   int item,j;
   for(int i=1;i<n;i++)
   {
       item=a[i];
       j=i-1;
       while(j>=0 && a[j]<item)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=item;
   }
   for(int i=0;i<n;i++)
    cout<<a[i];
}
int main()
{
   int a[]={5,4,1,2,3};
   insertion_sort(a,5);

}
