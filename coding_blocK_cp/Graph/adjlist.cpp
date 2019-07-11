#include<iostream>
#include<list>
using namespace std;
class Graph
{

int V;
list<int> *l;

public:

 Graph(int v)
{
V=v;
//array of linked list

l=new list<int>[V];

}

void addEdge(int a,int b ,bool bidir=true)
{

l[a].push_back(b);

if(bidir)
{ l[b].push_back(a); }

}


void printgraph()
{

for(int i=0;i<V;i++)
   {
    cout<<i<<"->";
	for(int vertex:l[i])
		{cout<<vertex<<",";}

    cout<<endl;
   }

}

};

int main()
{

Graph g(6);

g.addEdge(0,1);
g.addEdge(0,4);
g.addEdge(4,3);
g.addEdge(1,4);
g.addEdge(1,2);
g.addEdge(2,3);
g.addEdge(1,3);

g.printgraph();

return 0;

}
