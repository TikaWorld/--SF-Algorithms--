#include "Graph.h"

int main()
{
	Node* a = create_node(1);
	Node* b = create_node(2);
	Node* c = create_node(3);
	Node* d = create_node(4);
	Node* e = create_node(5);
	connect_node(a, b);
	connect_node(a, c);
	connect_node(a, e);
	connect_node(b, c);
	connect_node(c, d);
	connect_node(c, e);
	connect_node(d, e);

	DFS(a);
	return 0;
}