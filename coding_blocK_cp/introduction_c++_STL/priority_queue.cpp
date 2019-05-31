#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

priority_queue <int> v;
int n,k;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>k;
v.push(k);
}

while(!v.empty())
{
cout<<v.top()<<" ";
v.pop();
}
return 0;
}
