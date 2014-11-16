#ifndef NODE_H
#define NODE_H


//=============================================================================
// Class: Node
// Description: Node object to be used with a shortest-path graph.
// TODO: Revisit after graph implementation
//=============================================================================
class Node{
public:
	// Constructors - Overloading
	Node();
	Node(int priority);
	~Node();

	// Friends
	friend class PriorityQueue;

	// Mutators
	
	// Accessors
private:
	int cost;
	Node * prev;
	bool visited;
};
//=============================================================================


#endif
