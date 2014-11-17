#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"

//=============================================================================
// Class: Graph
// Description: 
// TODO: 
//=============================================================================
class Graph {
public:
	// Constructors - Overloading
	Graph();
	Graph(int vertexCount);
	Graph(const Graph & src);
	~Graph();

	// Mutators
	void insertEdge(int i, int j, int weight);
	void removeEdge(int i, int j, int weight);

	// Accessors
	void dijkstra();
	void findShortestPath();
	bool isEdge(int i, int j) const;
	bool adjacent(int vertexA, int vertexB) const;
	void neighbors(int vertex) const;

private:
	int ** adjacencyMatrix;
	Node * vertexContainer;
	int vertexCount;
};
//=============================================================================


#endif
