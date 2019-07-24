#include<iostream>
#define ll long long
using namespace std;

int main() {
    ll n,t;
    cin>>t;
    while(t--)

    {
        cin>>n;
          ll a=1,b=1,c;

        for(ll  i=0;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;

      //cout<<c<<" ";
        }

        cout<<c<<endl;
    }
	return 0;
}
