#include<iostream>
#include<list>
#include<map>
using namespace std;
template<typename T>
class Graph
{

int V;
map<T,list<T>> l; 
public:

 Graph()
{

}

void addEdge(T a, T b,bool bidir=true)
{

l[a].push_back(b);

if(bidir)
{ l[b].push_back(a); }

}


void printgraph()
{
for(auto row:l)
{
	cout<<row.first<<"=>";
	
    for(T element:row.second)
          {
          cout<<element<<",";
          }
   
   cout<<endl;
 }

}

};

int main()
{

Graph<string> g;
//write name carefuull with no sapce and no capital variation in same name
g.addEdge("mumbai","chandrapur");
g.addEdge("pune","mumbai");
g.addEdge("nagpur","pune");
g.addEdge("nagpur","chandrapur");
//g.addEdge(1,2);
//g.addEdge(2,3);
//g.addEdge(1,3);

g.printgraph();

return 0;

}
