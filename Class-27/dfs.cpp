#include <bits/stdc++.h>
using namespace std;

#define V 7

void adjList(vector<int> graph[])
{
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << i;
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << " - > " << graph[i][j];
        }
        cout << endl;
    }
}
void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void DFS(vector<int> graph[], int start)
{
    cout << "DFS: ";

    vector<bool> visited(V, false);
    stack<int> st;
    st.push(start);
    visited[start] = true;

    while (!st.empty())
    {
        int v = st.top();
        cout << v << " ";
        st.pop();

        for (auto i = graph[v].begin(); i != graph[v].end(); i++)
        {
            if (!visited[*i])
            {
                st.push(*i);
                visited[*i] = true;
            }
        }
    }
}
int main()
{
    vector<int> graph[V];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);

    adjList(graph);
    DFS(graph, 0);
}