#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

int p;
cin>>p;
int c=0;
while(p)
{

if(p&1)
{ c++;
}
p=p>>1;
}
cout<<"no of bits in no"<<c;

return 0;
}
