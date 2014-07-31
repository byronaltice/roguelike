#include "stdafx.h"
#include <vector>
#include <map>
#include <iostream>
using namespace std;

struct GraphNode
{
	GraphNode* me = this;
	vector<GraphNode*> destinations;
};
bool DoesAPathExist(GraphNode* start, GraphNode* dest);
int _tmain(int argc, _TCHAR* argv[])
{
	GraphNode* a = new GraphNode;
	GraphNode* b = new GraphNode;
	GraphNode* c = new GraphNode;
	GraphNode* d = new GraphNode;
	GraphNode* e = new GraphNode;
	GraphNode* f = new GraphNode;
	GraphNode* g = new GraphNode;
	GraphNode* h = new GraphNode;


	a->destinations.push_back(b);
	b->destinations.push_back(a);
	b->destinations.push_back(b);
	b->destinations.push_back(c);
	c->destinations.push_back(d);
	d->destinations.push_back(e);
	d->destinations.push_back(f);
	d->destinations.push_back(g);
	e->destinations.push_back(h);
	f->destinations.push_back(h);
	g->destinations.push_back(c);

	if (DoesAPathExist(g, f)) //expect Yep
		cout << "Yep";
	else
		cout << "Nope";

	if (DoesAPathExist(a, b)) //expect Yep
		cout << "Yep";
	else
		cout << "Nope";

	if (DoesAPathExist(b, b)) //expect Yep
		cout << "Yep";
	else
		cout << "Nope";

	if (DoesAPathExist(h, f)) //expect Nope
		cout << "Yep";
	else
		cout << "Nope";

	if (DoesAPathExist(c, b)) //expect Nope
		cout << "Yep";
	else
		cout << "Nope";

	return 0;
}
map < GraphNode*, bool> visitedMap;
bool DoesAPathExist(GraphNode* start, GraphNode* dest) //9:43 - 10:07
{
	if (start == dest)
		return true;

	while(start->destinations.size() > 0)
	{
		GraphNode* next = (start->destinations.back());
		start->destinations.pop_back();
		bool exists = DoesAPathExist(next, dest);
		if (!exists && start->destinations.size() > 0) continue;
		return exists;
	}

	return false;
}
