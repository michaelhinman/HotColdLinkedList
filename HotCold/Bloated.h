#ifndef BLOATED_H
#define BLOATED_H

#include "Node.h"

class Bloated
{
public:
	// specialized
	Bloated(const unsigned int NodeCount);

	// Big four
	~Bloated();
	Bloated() = delete;
	Bloated(const Bloated &) = delete;
	Bloated & operator = (const Bloated &) = delete;

	// methods
	bool FindKey(int key, Node *&foundNode) const;
	Node *GetListHead() const;

private:
	Node *pHead;
};
#endif 
