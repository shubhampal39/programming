#include<bits/stdc++.h>

using namespace std;
int findpower(int a,int b)
{
int power;
if(b==0)
{return 1;}

power=findpower(a,b/2);
power*=power;

if(b&1)
{
return a*power;
}

return power;


}

int main()
{

  int a,b;
   cin>>a>>b;
cout<<findpower(a,b);


return 0;
}
