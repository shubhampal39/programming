//stack
#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

stack <string> v;

v.push("apple");
v.push("mango");
v.push("guava");

while(!v.empty())
{
cout<<v.top()<<" ";
v.pop();

}
return 0;
}
