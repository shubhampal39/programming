#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n,k,m=INT_MAX;
cin>>n>>k;
int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
    m=min(m,a[i]);
}


if(m>k)
{
  cout<<"0"<<endl;
}
else
{
cout<<k-m<<endl;    
}

}


return 0;
}
