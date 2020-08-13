#include <iostream>
#include "Graph.h"
void main()
{
	Graph g;

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 4);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(3, 5);

	g.breadthFirst(0);

	std::cout << std::endl;

	g.depthFirst(0);


}