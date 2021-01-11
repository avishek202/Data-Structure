#include<iostream>
using namespace std;

int* bubble_sort(int a[],int n)
{

    int c=0;
    for(int i=0;i<n;i++)
    {    int k=0;
        for(int j=0;i<j-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                k=-1;
            }
            c++;
        }

        if(k==0) return a;

    }
    return a;
}

int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
         cin>>a[i];

    int *p = bubble_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<*(p+i);

}
