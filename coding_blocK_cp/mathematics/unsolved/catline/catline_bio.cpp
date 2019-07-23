#include<iostream>
using namespace std;
int catline_no(int n,int k)
{

int res=1;

if(k>n-k)
{ k=n-k;
}

for(int i=0;i<k;i++)
{

res *=(n-i);
res/=(i+1);

}

return  res;
}


int main()
{


int n;
cin>>n;
int c=catline_no(2*n,n);

cout<<c/(n+1);
return 0;

}
