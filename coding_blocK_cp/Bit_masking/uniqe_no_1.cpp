#include <bits/stdc++.h> 
using namespace std; 

int main ()
{
   
    vector<int> v{10, 20,20,30,10};
  int ans=0;
  for(int i=0;i<v.size();i++)
   { ans=ans^v[i];}

  cout<<ans;

return 0;
}
