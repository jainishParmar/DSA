#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int src, dest;
};

class Graph
{
public:
    vector<vector<int>> adjList;

    Graph(vector<Edge> const &edges, int n)
    {
        adjList.resize(n);

        for (auto &edge : edges)
        {
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};

void dfs(Graph const &graph, int i, vector<bool> &visited)
{
    visited[i] = true;
    cout << i << "  ";
    for (int u : graph.adjList[i])
    {
        if (!visited[u])
        {
            dfs(graph, u, visited);
        }
    }
}
int main()
{
    vector<Edge> edges = {
        {1, 2}, {1, 7}, {1, 8}, {2, 3}, {2, 6}, {3, 4}, {3, 5}, {8, 9}, {8, 12}, {9, 10}, {9, 11}};
    int n = 13;
    Graph graph(edges, n);
    vector<bool> visited(n);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(graph, i, visited);
        }
    }

    return 0;
}