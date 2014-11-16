#include "Graph.h"


//=============================================================================
// Class: Graph
// Function: Default Constructor
// Parameters: None
// Description: 
// TODO:
//=============================================================================
Graph::Graph(){}
//=============================================================================


//=============================================================================
// Class: Graph
// Function: Overloaded Constructor
// Parameters: (int vertexCount)
// Description: Initializes adjacencyMatrix as a symmetric matrix of size
				vertexCount^2;
// TODO:
//=============================================================================
Graph::Graph() {
	this->vertexCount = vertexCount;
	adjacencyMatrix = new bool*[vertexCount];
	
	for (int i = 0; i < vertexCount; i++) {
		adjacencyMatrix[i] = new bool[vertexCount];
		for (int j = 0; j < vertexCount; j++)
			adjacencyMatrix[i][j] = false;
	}	
}
//=============================================================================


//=============================================================================
// Class: Graph
// Function: Copy Constructor
// Parameters: (const Graph & src)
// Description: 
// TODO:
//=============================================================================
Graph::Graph(const Graph & src) {}
//=============================================================================


//=============================================================================
// Class: Graph
// Function: Destructor
// Parameters: None
// Description: Deallocates the memory allocated by the adjacencyMatrix.
// TODO: Test this
//=============================================================================
Graph::~Graph() {
	for (int i = 0; i < vertexCount; i++)
		delete [] adjacencyMatrix[i];
	delete [] adjacencyMatrix;
}
//=============================================================================



//=============================================================================
// Class: Graph
// Function: insertEdge
// Parameters: (int i , int j)
// Description: Adds an undirected edge to the graph. 
// TODO: 
//=============================================================================
void Graph::insertEdge(int i, int j) {
	if ((i >= 0 && i < vertexCount) && (j >= 0 && j < vertexCount)) {
		adjacencyMatrix[i][j] = true;
		adjacencyMatrix[j][i] = true;	
	}
}
//=============================================================================


//=============================================================================
// Class: Graph
// Function: removeEdge
// Parameters: (int i , int j)
// Description: Removes an undirected edge from the graph. 
// TODO: 
//=============================================================================
void Graph::removeEdge(int i, int j) {
	if ((i >= 0 && i < vertexCount) && (j >= 0 && j < vertexCount)) {
		adjacencyMatrix[i][j] = false;
		adjacencyMatrix[j][i] = false;	
	}
}
//=============================================================================


//=============================================================================
// Class: Graph
// Function: isEdge
// Parameters: (int i , int j)
// Description: Determines if there is an edge between i and j and returns a
//				boolean value.
// TODO: 
//=============================================================================
bool Graph::isEdge(int i, int j) {
	if ((i >= 0 && i < vertexCount) && (j >= 0 && j < vertexCount))
		return adjacenyMatrix[i][j];
	else
		return false;
}
//=============================================================================


