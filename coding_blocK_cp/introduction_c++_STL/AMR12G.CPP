#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tcases;
cin>>tcases;
char mat[55][55];
for(int i=0;i<tcases;i++)
  {
   int M,N,K;
   cin>>M>>N>>K;
  vector<int> bulbsLit(M,0);//intialize vector m with 0 values

  for(int r=0;r<M;++r)
  {
     for(int c=0;c<N;++c)
     {
        cin>>mat[r][c];
        if(mat[r][c]=='*') 
              ++bulbsLit[r];
       }
  }
  
 sort(bulbsLit.begin(),bulbsLit.end(),less<int>());

int idx=0;
while(K>0 && idx<M && N-bulbsLit[idx]>bulbsLit[idx])
{
   bulbsLit[idx]=N-bulbsLit[idx];//after toggle
   --K;
   ++idx;
   

 }
if(K!=0)
{
auto it=min_element(bulbsLit.begin(),bulbsLit.end());
*it=N-*it;

}
 
cout<<accumulate(bulbsLit.begin(),bulbsLit.end(),0)<<"\n";


 }



return 0;
}
