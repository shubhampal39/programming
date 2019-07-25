#include<iostream>
#define ll long long
using namespace std;

void multiplicative_inverse(ll n)
{

n=n%1000000007;
for(int x=1;x<1000000007;x++)
{
 if((n*x)%1000000007==1)
  {
    cout<<x;
    break;
   }

}

}


int main()
{
	ll n;
	cin>>n;

   multiplicative_inverse(n);

   return 0;

}
