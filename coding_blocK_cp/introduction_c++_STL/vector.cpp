//vector
#include <bits/stdc++.h> 
using namespace std; 

int main ()
{


vector<int> v;
int n;
cin>>n;


for(int i=0;i<n;i++)
{
  int temp;
  cin>>temp;
  v.push_back(temp);
}

for(int j=0;j<v.size();j++)
{ cout<<v[j]<<" "; }

//pop_back
sort(v.begin(),v.end());
cout<<"\nsort:";
for(int j=0;j<v.size();j++)
{ cout<<v[j]<<" "; }

cout<<"\nsize:"<<v.size()<<"\tcapacity:"<<v.capacity();
return 0;
}
