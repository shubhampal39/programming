//topologicalsort using bfs
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

bool isCyclehelper(T node,map<T,bool> &visited, T parent)
{
visited[node]=true;
for(T neigbour:adjList[node])
{
  if(!visited[neigbour])
   { bool cycleDetected=isCyclehelper(neigbour,visited,node);
 if(cycleDetected){return true;}

}
//in this neibour is already visited
else if(neigbour!=parent){return true;} 
 

}
return false;

}

bool iscycleDFS()
{
map<T,bool> visited;
//you can for finding cycle in evry dfs tree
for(auto i:adjList)
{
  T node=i.first;
  if(!visited[node])
    {
   bool ans=isCyclehelper(node,visited,node);
          if(ans==true){return true;}
    }

 }
return false;
}


}; 



int main()
{
   
Graph<int> g;
g.addEdge(1,2);
g.addEdge(1,4);
g.addEdge(4,3);
g.addEdge(2,3);

if(g.iscycleDFS())
{
cout<<"cyclic Graph";
}
else
{cout<<"non cyclic";}
return 0;
}
