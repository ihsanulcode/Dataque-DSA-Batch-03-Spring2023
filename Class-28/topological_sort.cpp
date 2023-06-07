#include <iostream>
#include <vector>
#include <list>
using namespace std;

#define V 5

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].emplace_back(v);
}
void topological_sort(vector<int> graph[], vector<bool> &visited, list<int> &result, int vertex)
{
    visited[vertex] = true;
    for (auto i = graph[vertex].begin(); i != graph[vertex].end(); i++)
    {
        if (!visited[*i])
        {
            topological_sort(graph, visited, result, *i);
        }
    }
    result.push_front(vertex);
}
int main()
{
    vector<int> graph[V];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 4);

    vector<bool> visited(V, false);
    list<int> result;

    topological_sort(graph, visited, result, 0);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}
