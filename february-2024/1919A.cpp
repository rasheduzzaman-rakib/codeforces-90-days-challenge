#include<bits/stdc++.h>
using namespace std;
int  main()
{
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int even=a+b;
        if(even%2==0)
            {
                cout<<"Bob"<<endl;
            }
        else
            cout<<"Alice"<<endl;
    }

}