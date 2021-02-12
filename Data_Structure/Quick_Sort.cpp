#include<iostream>
using namespace std;
int pertition(int a[], int low,int high)
{

    int pivot,i,j,t;
    pivot=a[high];

    for(i=low-1,j=low; j<high; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            t=a[j];
            a[j]=a[i];
            a[i]=t;

        }
    }

    t=a[i+1];
    a[i+1]=a[high];
    a[high]=t;

    return i++;

}

int*  quic_Sort(int a[], int low,int high)
{
    if(low>=high)
    {
        return a;
    }
    int p;

    p =pertition(a,low,high);

    quic_Sort(a,low,p-1);
    quic_Sort(a,p+1,high);

}


int main()
{
    int n=8;
    int a[] = {2,3,4,5,1,8,9,8};

    int* b=quic_Sort(a,0,n);
    for(int i=0 ;i<=n;i++)
        cout<<*(b+i);

}
