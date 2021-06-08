#include "graph.h"

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
	return a.second < b.second;
}

Graph::Graph(string el) {
	int u, v;
	int max_id = -1;
	vector<Edge>> tmp;
	ifstream f(el);

	if (f.is_open()) {
		while(f >> u >> v) {
			if (u > max_id)
				max_id = u;
			tmp.push_back(make_pair(u, v));
		}

		for (int i = 0; i < max_id + 1; i++) {
			edges.push_back(vector<Edge> ());
		}

		for (int i = 0; i < tmp.size(); i++) {
			int idx = tmp[i].first;
			edges[idx].push_back(tmp[i]);
		}

		for (int i = 0; i < edges.size(); i++) {
			sort(edges[i].begin(), edges[i].end());
		}
	}
	else {
		cout<<"ERROR! Cannot read edges"<<endl;
		exit(-1);
	}
}