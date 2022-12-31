#include "Node.h"
#include "ColdNode.h"

ColdNode::ColdNode()
{
}
ColdNode::ColdNode(const Node& r)
{
	this->aa = r.aa;
	this->aa = r.aa;
	this->bb = r.bb;
	this->cc = r.cc;
	this->dd = r.dd;
	this->x = r.x;
	this->y = r.y;
	this->z = r.z;
	this->w = r.w;
	this->A = r.A;
	this->B = r.B;
	this->C = r.C;
	this->D = r.D;
	this->MA = r.MA;
	this->MB = r.MB;
	this->MC = r.MC;
	this->MD = r.MD;
	this->ME = r.ME;
	const char* p = r.name;
	memcpy_s(this->name, r.NAME_SIZE + 1, p, r.NAME_SIZE);

}

void ColdNode::setHot(HotNode*  r)
{
	this->pHot = r;
}

