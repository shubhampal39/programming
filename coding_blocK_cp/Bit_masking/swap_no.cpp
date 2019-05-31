#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

int a,b;
cin>>a>>b;
cout<<"a:"<<a<<"\t"<<"b:"<<b<<"\n";

a=a^b;
b=b^a;
a=b^a;
cout<<"a:"<<a<<"\t"<<"b:"<<b<<"\n";


return 0;
}
