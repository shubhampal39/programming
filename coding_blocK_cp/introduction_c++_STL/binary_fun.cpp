#include <bits/stdc++.h> 
using namespace std; 

int main ()
{
   
    vector<int> v{10, 20,20,20,20,20, 30, 40, 50,60};
//vector<int>::iterator i,m; 
bool i = binary_search(v.begin(), v.end(), 70); 
 //function return true false or bool value

cout<<i;

return 0;
}
