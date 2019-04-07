#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="HELLO!! WORLD@@##";
int len,i;
for(int i=0,len=str.length();i<len;i++)
{

if(ispunct(str[i]))
   {
    
    str.erase(i,1);
    len=str.size();
    --i;
    }

}

cout<<str;


return 0;
}
