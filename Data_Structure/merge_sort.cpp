#include<iostream>
using namespace std;


void Merge(int a[],int l,int h,int mid)
{
    int c[100];
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=h)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else{

            c[k]=a[j];
            j++;
            k++;
        }
    }
    while(j<=h)
    {
        c[k]=a[j];
        k++;
        j++;

    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    for(int i=0;i<=h;i++)
    {
        a[i]=c[i];
    }
}


void merge_sort(int a[],int l,int h)
{
    if(l<h)
    {
       int mid =(l+h)/2;
       merge_sort(a,l,mid);
       merge_sort(a,mid+1,h);
       Merge(a,l,h,mid);
    }
}

void show(int *a)
{
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;

}
int main()
{
    int a[]={9, 1, 4, 14, 4};
     show(a);
    merge_sort(a,0,5);
    //cout<<"fd";
    show(a);


}
