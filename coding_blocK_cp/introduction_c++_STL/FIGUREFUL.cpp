#include<bits/stdc++.h>
using namespace std;
int main()
{
typedef pair<int,int> ii;
map<ii,string> table;
int n;
cin>>n;

for(int i=0;i<n;i++)
{

ii code;
string name;
cin>>code.first>>code.second;
cin>>name;
table[code]=name;
}
int q;
cin>>q;
for(int i=0;i<q;i++)
{
ii code;
cin>>code.first>>code.second;
cout<<table[code]<<endl;
}


return 0;
}
