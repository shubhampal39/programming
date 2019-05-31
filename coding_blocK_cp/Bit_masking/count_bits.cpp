#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

int p;
cin>>p;
int c=0;
while(p)
{
c++;
p=p&(p-1);
}
cout<<"no of bits in no"<<c;

return 0;
}
