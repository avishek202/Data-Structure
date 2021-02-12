#include<iostream>
using namespace std;

void tower(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"Move Disk "<<n<<" From "<<A<<" to "<<C<<endl;
        return ;
    }

    tower(n-1,A,C,B);
    cout<<"Move Disk "<<n<<" From "<<A<<" to "<<C<<endl;
    tower(n-1,B,A,C);
}
int  main()
{
    int n;
    cout<<"Enter the Number of Disk: "<<endl;
    cin>>n;
    tower(n,'A','B','C');
}

