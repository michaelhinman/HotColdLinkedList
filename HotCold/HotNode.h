//-----------------------------------------------------------------------------
// Copyright 2021, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef HOT_NODE_H
#define HOT_NODE_H

class ColdNode;

class HotNode
{
public:
	HotNode();
	HotNode(const HotNode& r) = delete;
	HotNode& operator = (HotNode& r) = delete;
	~HotNode() = default;

	// You CANNOT add additional data to this class
	HotNode		*pNext;
	HotNode		*pPrev;
	int		key;
	ColdNode	*pCold;

	HotNode& getPrev();
};

#endif

// ---  End of File ---

