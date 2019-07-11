#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph
{
map<T,list<T>>adjList;
public:
Graph()
{}

void addEdge(T u,T v,bool bidir=true)
{
	adjList[u].push_back(v);
	if(bidir){adjList[v].push_back(u);}

}


void dfsHelper(T node,map<T,bool> &visited,list<T> &ordering)
{

visited[node]=true;

for(T neighbour:adjList[node])
{
if(!visited[neighbour])
{
dfsHelper(neighbour,visited,ordering);
}
}
ordering.push_front(node);

}

void Topologicalsort()
{
 map<T,bool> visited;

 list<T> ordering;//for output

for(auto i:adjList)
{
   //i is pair(node,list of nodes)
    T node=i.first;
   if(!visited[node])
     {
      dfsHelper(node,visited,ordering);
     }

}
for(T element:ordering)
{cout<<element<<"==>";}

}
}; 



int main()
{   
Graph<string> g;
g.addEdge("E","PL",false);
g.addEdge("M","PL",false);
g.addEdge("PL","HTML",false);
g.addEdge("PL","P",false);
g.addEdge("PL","J",false);
g.addEdge("PL","JS",false);
g.addEdge("P","W",false);
g.addEdge("HTML","CSS",false);
g.addEdge("CSS","JS",false);
g.addEdge("JS","W",false);
g.addEdge("J","W",false);
g.addEdge("P","W",false);
g.Topologicalsort();
return 0;
}
