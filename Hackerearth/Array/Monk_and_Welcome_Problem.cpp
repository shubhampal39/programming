#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    
    
    for(int i=0;i<n;i++)
    {
       a[i]=a[i]+b[i];    }
       
       
     
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }  
    return 0;
}
