#pragma once
#include <iostream>
#include <map>
#include <queue>
#include<list>

using namespace std;


class Graph
{
public:
	map <int,list<int>> map1; //list<int> values, neighbors
	void DFS_private(int start, map<int,bool>& check);

public:
	Graph() {}
	void addEdge(int a, int b);
	void breadthFirst(int startNode); //iterative
	void depthFirst(int startNode); //recursion
	
};





