//Program to check if input is an integer or a string
#include<bits/stdc++.h>
using namespace std;

int  main()
{

  string t;
  cin>>t;


int found=0;

  for(int i=0;i<t.length();i++)
    {

    if(isdigit(t[i]))
       { 
          found=1;         
        }
    }
 
if(found)
  { cout<<"Integer"<<endl;
     }
 else
    cout<<"String"<<endl;


return 0;
}
