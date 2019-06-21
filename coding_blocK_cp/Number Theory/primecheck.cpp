#include<iostream>
using namespace std;
bool prime(int n)
{
if(n==1){return false;}

for(int i=2;i*i<=n;i++)
{
if(n%i==0){return false;}
}
return true;

}

int main()
{
int n;
cin>>n;
if(prime(n))
{cout<<"Yes"<<endl;
}
else
{cout<<"No"<<endl;}
return 0;
}
