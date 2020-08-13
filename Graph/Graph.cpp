#include "Graph.h"

void Graph::addEdge(int a, int b)
{
	map1[a].push_back(b);
	map1[b].push_back(a);
}

void Graph::breadthFirst(int startNode)
{
	map<int, bool> checked;
	queue<int> q;

	q.push(startNode);
	checked[startNode] = true;

	while (!q.empty())
	{
		int node = q.front(); //node to print and pop out of the queue
		q.pop(); //pop to remove from queue
		cout << node << " ";
		for (int neighbor : map1[node])
		{
			if (!checked[neighbor])
			{
				q.push(neighbor);
				checked[neighbor] = true;
			}
		}
	}
}

void Graph::depthFirst(int startNode)
{
	map<int, bool> checked; //mark every node as unchecked

	for (auto n : map1)
	{
		int node = n.first;
		checked[node] = false;
	}
	DFS_private(startNode, checked);

}

void Graph::DFS_private(int start, map<int, bool>& check)
{
	cout << start << " ";
	check[start] = true;
	for (int neighbor : map1[start])
	{
		if (!check[neighbor])
		{
			DFS_private(neighbor, check);
		}
	}
}


