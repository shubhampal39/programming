#include<bits/stdc++.h>

using namespace std;
int main()
{

int t;
cin>>t;

while(t--)
{

int a,b,c=0;
cin>>a>>b;

for(int i=a;i<=b;i++)
{ int j=i;
while(j>0)
{
c++;
j=j&(j-1);  
}
}
cout<<c<<"\n";
}

return 0;
}
