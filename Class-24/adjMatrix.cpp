#include <iostream>
#include <vector>
using namespace std;

#define V 5

void addEdge(int graph[V][V], int u, int v, int weight)
{
    graph[u][v] = weight;
}
void adjMatrix(int graph[V][V])
{
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int graph[V][V] = {0};
    addEdge(graph, 0, 1, 1);
    addEdge(graph, 0, 4, 5);
    addEdge(graph, 1, 1, 2);
    addEdge(graph, 1, 2, 3);
    addEdge(graph, 1, 3, 4);
    addEdge(graph, 1, 4, 2);
    addEdge(graph, 3, 2, 2);
    addEdge(graph, 3, 4, 3);

    adjMatrix(graph);
    return 0;
}