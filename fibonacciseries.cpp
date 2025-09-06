#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    
    int a=0;
    int b=1;

    cout <<a <<" "<< b <<" " ;
    for(int i=0;i<n;i++)
    {
        int ans=a+b;

        cout<<ans<< " ";

        a=b;
        b=ans;
    }
    return 0;
}