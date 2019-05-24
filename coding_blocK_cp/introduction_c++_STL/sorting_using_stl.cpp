#include<bits/stdc++.h>
using namespace std;
//descending order

bool funct(int a,int b)
{
return a>b;
}

int main()
{

int a[]={1,2,6,8,3,5,10};
int n=sizeof(a)/sizeof(a[0]);
sort(a,a+n,funct);

for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
} 


return 0;
}
