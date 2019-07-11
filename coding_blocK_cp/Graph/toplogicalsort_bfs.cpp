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

void Topologicalsort()
{
queue<T> q;
map<T,bool> visited;
map<T,int> indegree;

for(auto i:adjList)
{
T node=i.first;
visited[node]=false;
indegree[node]=0;
}

//find out  all the degrees
for(auto i:adjList)
{
  T u=i.first;
  for(T v:adjList[u])
   {
   indegree[v]++;
   } 

}

//find out  all the 0 degrees
for(auto i:adjList)
{
T node=i.first;
 if(indegree[node]==0)
   {q.push(node);}

}

//start with algo

while(!q.empty())
{
T node=q.front();
cout<<node<<"==>";
q.pop();
for(T neighbours:adjList[node])
  {
   indegree[neighbours]--;
  if(indegree[neighbours]==0)
   {q.push(neighbours);} 
 }
}
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
