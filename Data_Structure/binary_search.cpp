#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements: "<<endl;
    cin>>n;
    cout<<"Enter All the Elements: "<<endl;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int li=0,hi=n-1,mid,x;

    cout<<"Enter the Number Want to Search"<<endl;
    cin>>x;

    while(1)
    {
        mid = (li+hi)/2;
        if(a[mid]==x)
        {
            cout<<"The Number is Found"<<endl;
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
