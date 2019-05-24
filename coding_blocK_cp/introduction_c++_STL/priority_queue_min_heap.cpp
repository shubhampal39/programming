
#include<bits/stdc++.h>
using namespace std;
//priority queue has class iterator
class comparator
{
public:
  bool operator()(int a,int b)
   {  //a has highest priority ..then a appear after b(b,a)
   if(a<b) 
	return false;
// b has lowest priority here a then b
   return true;
   }

};

int main()
{

priority_queue<int,vector<int>,comparator> pq;
pq.push(1);
pq.push(2);

cout<<pq.top();

return 0;
}
