#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;


template <class listtype> class LinkedList
{
public:
	LinkedList() :next(NULL), iValue(NULL), me(this), first(NULL) { if (first == NULL) first = me; }
	virtual ~LinkedList() {}
	bool nextNode();
	void firstNode();
	void addNode();
	void removeNode();
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
	if (me->next != NULL)
	{
		me = me->next;
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
	temp = next;
	next = new LinkedList<listtype>();
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
	return me->iValue;
}
int _tmain(int argc, _TCHAR* argv[])
{
	LinkedList<int> a;
	a.setValue(5);
	a.addNode();
	a.setValue(11);
	a.addNode();
	a.setValue(15);

	a.addNode();
	a.setValue(1);

	a.addNode();
	a.setValue(10);

	a.addNode();
	a.setValue(10);

	a.addNode();
	a.setValue(115);

	a.addNode();
	a.setValue(15);

	a.firstNode();

	map<int, bool> checker;
	do
	{
		if (checker[a.getValue()])
			cout << "Duplicate found [" << a.getValue() << "] " << endl;
		else
			cout << "Not a duplicate [" << a.getValue() << "]" << endl;
		checker[a.getValue()] = true;
	} while (a.nextNode());


	return 0;

}
