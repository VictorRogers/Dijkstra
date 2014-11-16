#ifndef GRAPH_H
#define GRAPH_H


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
	void insertVertex();
	void deleteVertex();	
	void insertEdge(int i, int j);
	void removeEdge(int i, int j);
	
	// Accessors
	void findShortestPath();
	bool isEdge(int i, int j) const;
	
private:
	bool ** adjacencyMatrix;
	int vertexCount;
	enum vertexState {White, Gray, Black};
};
//=============================================================================


#endif
