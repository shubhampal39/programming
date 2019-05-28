#include <bits/stdc++.h> 
using namespace std; 

int main ()
{
   
    vector<int> v{10, 20,20,20,20,20, 30, 40, 50,60};
vector<int>::iterator i,m; 
i = upper_bound(v.begin(), v.end(), 20); 
m = lower_bound(v.begin(), v.end(), 20);    

cout<<m-v.begin()<<"\n"<<i-v.begin();

return 0;
}
