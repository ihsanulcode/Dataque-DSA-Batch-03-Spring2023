#include <iostream>
using namespace std;

#define V 5

void addEdge(int graph[V][V], int from, int to)
{
    graph[from][to] = 1;
}

void adjMatrix(int graph[V][V])
{
    cout << "\nAdjacency Matrix: " << endl;
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
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 3, 2);
    addEdge(graph, 3, 4);
    adjMatrix(graph);

    return 0;
}