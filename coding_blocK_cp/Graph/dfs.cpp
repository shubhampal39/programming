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


void dfsHelper(T node,map<T,bool> &visited)
{
visited[node]=true;
cout<<node<<" ";

for(T neighbour:adjList[node])
{
if(!visited[neighbour])
{
dfsHelper(neighbour,visited);
}

}

}

void dfs(T src)
{
map<T,bool> visited;

dfsHelper(src,visited);

}

}; 



int main()
{   
Graph<int> g;
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(0,4);
g.addEdge(2,4);
g.addEdge(2,3);
g.addEdge(3,4);
g.addEdge(3,5);
g.dfs(0);
return 0;

}
