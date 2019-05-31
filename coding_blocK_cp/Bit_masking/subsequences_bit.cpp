//subsequence of string
#include <bits/stdc++.h> 
using namespace std; 
void check_no(int i,string str)
{
int c=0;
while(i)
{
if(i&1)
{cout<<str[c];}
c++;
i=i>>1;
}

}

int main ()
{

string  str;
cin>>str;
int s=str.length();
int n=(1<<s)-1;
//cout<<n<<str;

for(int i=1;i<=n;i++)
{
//cout<<i;
check_no(i,str);
cout<<"\n";
}
return 0;
}
