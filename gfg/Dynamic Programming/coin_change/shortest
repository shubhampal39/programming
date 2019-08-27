#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{

    string s1,s2;
    cin>>s1>>s2;
    
    int n1=s1.length(),n2=s2.length();
    int lis[n1+1][n2+1];
    
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
         {
             if(i==0 || j==0)
             {
                 lis[i][j]=0;
             }
             else if (s1[i-1]==s2[j-1])
                  {
                      lis[i][j]=1+lis[i-1][j-1];
                  }
                  else
                  {
                     lis[i][j]=max(lis[i-1][j],lis[i][j-1]);
                      
                  }
                             
         }
    }
    
    int l=lis[n1][n2];
    
    cout<<n1+n2-l<<endl;
    
    
}
	return 0;
}
