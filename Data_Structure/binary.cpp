#include<iostream>
using namespace std;
int main()
{
    int a[]= {2,3,4,5};
    int l=0;
    int r=(4-1);
    int   x;
    cin>>x;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(a[m]==x)

        {
            cout<<"Found";
            break;
        }
        else if(x>a[m])

            {
                l=m+1;

            }
        else
            r=m-1;
    }
}
