#include<iostream>
using namespace std;
int catline_no(int n)
{
if(n<=1)
	return 1;

long long res=0;
for(int i=0;i<n;i++)
{
res=res+catline_no(i)*catline_no(n-i-1);
}

return res;
}


int main()
{

int n;
cin>>n;
cout<<catline_no(n);
return 0;

}
