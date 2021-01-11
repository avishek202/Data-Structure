#include<iostream>
using namespace std;
int* selection(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int mi=a[i],index=-1,temp;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<mi)
            {
                mi=a[j];
                index=j;
            }
        }
        if(mi!=a[i])
        {
             temp=a[i];
            a[i]=mi;
            a[index]=temp;
        }

    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
        cin>>b[i];
    int *p;
     p = selection(b,n);
    for(int i=0;i<n;i++)
        cout<<*(p+i)<<" ";
}
