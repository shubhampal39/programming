#include<iostream>
#define ll long long
using namespace std;
int maxvalue(ll a,ll b)
{
    ll max_right_bit=a^b;
    ll right_bit=0;
    while(max_right_bit)
    {
        right_bit++;
        max_right_bit =max_right_bit>>1;
    }

return  (1<<right_bit)-1;


}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<maxvalue(a,b);
    return 0;

}
