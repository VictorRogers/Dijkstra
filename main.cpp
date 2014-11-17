#include "Graph.h"

int main() {
	
	Graph G(4);
	
	G.insertEdge(0, 1, 1);
	G.insertEdge(0, 3, 5);
	G.insertEdge(1, 4, 1);
	G.insertEdge(3, 4, 5);
		
	return 0;
}
