#ifndef COLD_NODE_H
#define COLD_NODE_H

class Node;
class HotNode;

class ColdNode
{
public:
	ColdNode();
	ColdNode(const Node& r);
	ColdNode(const ColdNode& r) = delete;

	~ColdNode() = default;

	HotNode	*pHot;
	char   aa;
	char   bb;
	char   cc;
	char   dd;
	float	x;
	float	y;
	float	z;
	float   w;
	Vect	A;
	Vect	B;
	Vect	C;
	Vect    D;
	Matrix	MA;
	Matrix	MB;
	Matrix	MC;
	Matrix	MD;
	Matrix  ME;
	char	name[Node::NAME_SIZE];

	void setHot(HotNode* r);

};

#endif
