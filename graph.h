#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <iostream>
#include <fstream>
#include <sstream>
#include <pair>
#include <string>
#include <algorithm>

using namespace std;

typedef pair<int, int> Edge;

class Graph {
public:
	vector<vector<Edge>> edges;
	Graph(string el);
	~Graph() {}
};

#endif