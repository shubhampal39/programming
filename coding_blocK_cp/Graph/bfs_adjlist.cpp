#include<iostream>
#include<list>
#include<queue>
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


void bfs(int src)
{
queue <int> q;
bool *visited=new bool[V] {0};
q.push(src);
visited[src]=true;
while(!q.empty())
{
int node=q.front();
cout<<node<<" ";
q.pop();
for(int nei:l[node])
{ if(!visited[nei])
	{
        q.push(nei);
	visited[nei]=true;
    }
}
}
}
};

int main()
{

Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3);

g.bfs(0);

return 0;

}


