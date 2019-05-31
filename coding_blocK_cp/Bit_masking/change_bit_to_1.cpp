//chnage bit to 1
#include <bits/stdc++.h> 
using namespace std; 

int main ()
{

int no,mask;
cin>>no;
cin>>mask;
mask=1<<mask;
cout<<no<<"\n"<<(no|mask);
return 0;
}
