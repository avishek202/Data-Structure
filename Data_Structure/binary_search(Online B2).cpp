#include<iostream>
using  namespace std;
void Binary_search(int a[],int x,int n)
{
    int li=0,hi=n-1,mid,Count=0;
    while(1)
    {
        Count++;
        mid=(li+hi)/2;
        if(x==a[mid])
        {
            cout<<"Item Found"<<endl;
            cout<<"Found at index "<<mid<<endl;
            cout<<"Number of Comperison "<<Count<<endl;
            break;
        }
        else if(x>a[mid])
        {
            li=mid+1;
        }
        else if(x<a[mid])
        {
            hi=mid-1;
        }
        if(li>hi)
        {
            cout<<"Not Found"<<endl;
            break;
        }

    }
}
int main()
{
    int n;
    cout<<"Enter the Number of ELement: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the all the elements: "<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the Number to found"<<endl;
    int x;
    cin>>x;
    Binary_search(a,x,n);

}
