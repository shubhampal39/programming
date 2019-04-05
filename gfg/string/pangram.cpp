#include<bits/stdc++.h>
#define MAX 26
using namespace std;
bool checkpanagram(string str)
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



  for(int i=0;i<26;i++)
    {
     if(mark[i]==0)
      {return false;}

     }

return true;   
}

int main()
{
string str = "The quick brown fox jumps over he"
                " lazy dog"; 

//string str="abcdefghijklmnopqrstuvwxyz";

if(checkpanagram(str))
{
  cout<<"Panagram"<<endl;
}
else
{
cout<<"not Panagram"<<endl;
}

return 0;
}

