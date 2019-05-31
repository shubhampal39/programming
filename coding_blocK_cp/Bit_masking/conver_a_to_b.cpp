#include <bits/stdc++.h> 
using namespace std; 

int main ()
{
   
int a,b;
cin>>a>>b;
int p=a^b;
int c=0;
//count bits
while(p)
{
c++;
p=p&(p-1);
}
cout<<"noss of bits required for change from a to b is"<<c;

return 0;
}
