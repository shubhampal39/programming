#include<bits/stdc++.h>
#define MAX 26
using namespace std;
string checkpanagram(string str)
{
    int mark[MAX]={0};
    int index;
    for(int i=0;i<str.length();i++)
   {
             if(str[i]>='A' && str[i]<='Z')
               {
                index=str[i]-'A'; 
                }
              else if(str[i]>='a' && str[i]<='z')
                {
               index=str[i]-'a';
                }
           
            mark[index]=1;
   }

string res="";


  for(int i=0;i<MAX;i++)
    {
     if(mark[i]==0)
      {res.push_back((char)(i+'a'));}

     }

return res;   
}

int main()
{

string str = "brown fox jumps over he"
                " lazy dog"; 

//string str="abcdefghijklmnopqrstuvwxyz";

cout<<checkpanagram(str)<<endl;

return 0;
}

