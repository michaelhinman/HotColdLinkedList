#include "HotNode.h"

HotNode* pNext;
HotNode* pPrev;
int		key;
ColdNode* pCold;
HotNode::HotNode()
	:pNext(nullptr), pPrev(nullptr), key(0), pCold(nullptr)
{
}

HotNode& HotNode::getPrev()
{
	return *this->pPrev;
}

