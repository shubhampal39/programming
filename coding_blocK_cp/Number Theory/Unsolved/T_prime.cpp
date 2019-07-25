#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll isprime(ll n)
{
if(n<=1)
	{return false;}
if(n<=3)
	{return true;}




if(n%2==0||n%3==0)
   {return false;}

for(ll i=5;i*i<=n;i=i+6)
{ 
    if(n%i==0||n%(i+2)==0)
       {return false;}

}

return  true;

}


ll checkTprime(ll a)
{ 

ll sq=sqrt(a);

if(1LL * sq*sq!=a)
	return false;

return isprime(sq)?true:false;
}


int main()
{
	ll n;
	cin>>n;
while(n--)
{
  ll m;
  cin>>m;
   if(checkTprime(m))
 	cout<<"YES"<<endl;
   else
	cout<<"NO"<<endl;
 }
   return 0;

}
