//queue
#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

queue <string> v;
string str;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>str;
v.push(str);
}

while(!v.empty())
{
cout<<v.front()<<" ";
v.pop();
}
return 0;
}
