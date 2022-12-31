#include "Bloated.h"
#include "Node.h"
#include "hotcold.h"

HotCold::HotCold(const Bloated * const pBloated)
{
	Node* tmp = pBloated->GetListHead();			//get old head
	unsigned int count = 0;
	while (tmp != nullptr)
	{
		count++;
		tmp = tmp->pNext;
	}
	this->pHotHead = new HotNode[count];
	HotNode* hots = this->pHotHead; 
	tmp = pBloated->GetListHead();
	hots->key = tmp->key;
	hots->pCold = new ColdNode(*(pBloated->GetListHead()));
	hots->pCold->setHot(hots);
	this->pColdHead = hots->pCold;
	hots->pPrev = nullptr;
	hots++;
	tmp = tmp->pNext;

	while (tmp != nullptr)
	{
		hots->pPrev = hots-1;
		hots->pPrev->pNext = hots; 
		hots->key = tmp->key;
		hots->pCold = new ColdNode(*tmp);
		hots->pCold->setHot(hots);
		tmp = tmp->pNext;
		hots++;
	}
}

HotCold::~HotCold()
{
	HotNode* tmp = this->pHotHead;
	while (tmp != nullptr)
	{
		delete tmp->pCold;
		tmp = tmp->pNext;
	}
		delete[] this->pHotHead;
}

bool HotCold::FindKey(int key, ColdNode *&pFoundColdNode, HotNode *&pFoundHotNode)
{
	HotNode* ptmp = this->pHotHead;
	while (ptmp != nullptr)
	{
		if (ptmp->key == key)
		{
			pFoundHotNode = ptmp;
			pFoundColdNode = ptmp->pCold;
			return true;
		}
		ptmp = ptmp->pNext;
	}
	return false;
}

HotNode *HotCold::GetHotHead() const
{
	return this->pHotHead;
}

