#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

int no,k;
cin>>no;
cin>>k;
k=1<<k;
if(no&k)
{
cout<<"1";
}
else
{cout<<"0";}

//no&k!=0?1:0;

return 0;
}
