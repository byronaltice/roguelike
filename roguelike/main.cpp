#include "stdafx.h"

using namespace std;

template <class listtype> class LinkedList
{
public:
	LinkedList() :next(NULL), iValue(NULL), me(this), first(NULL) { if (first == NULL) first = me; }
	virtual ~LinkedList() {}
	bool nextNode();
	void firstNode();
	void addNode();
	void setValue(const listtype & i);
	const listtype & getValue() const;
	LinkedList* first;
private:
	listtype iValue;
	LinkedList* next;
	LinkedList* me;
};
template <class listtype>
bool
LinkedList<listtype>::nextNode()
{
	if (next != NULL)
	{
		me = next;
		return true;
	}
	return false;
}
template <class listtype>
void
LinkedList<listtype>::firstNode()
{
	me = first;
}
template <class listtype>
void 
LinkedList<listtype>::addNode()
{
	LinkedList<listtype>* temp = NULL;
	if (next != NULL)
		temp = next;
	next = new LinkedList<listtype>;
	if (temp)
		next->next = temp;
	next->first = first;
	me = next;
}
template <class listtype>
void
LinkedList<listtype>::setValue(const listtype & i)
{
	me->iValue = i;
}
template <class listtype>
const listtype &
LinkedList<listtype>::getValue() const
{
	return iValue;
}
int _tmain(int argc, _TCHAR* argv[])
{
	LinkedList<int> a;
	a.setValue(5);
	a.addNode();
	a.setValue(11);
	a.firstNode();
	return 0;
}
