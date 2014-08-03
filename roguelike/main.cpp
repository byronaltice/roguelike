#include "stdafx.h"
#include <deque>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	return 0;
}

template<class T>
class CardDeck
{
public:
	CardDeck(){}
	
	virtual ~CardDeck(){}
	deque<Card<T>> GetCardDeck() { return stdCardDeque; }

private:

	deque<Card<T>> stdCardDeckDeque;
};
template<class T>
class Card
{
public:
	Card(){}
	virtual ~Card(){}

	T& GetProperties()
	{
		return CardPropertiesType;
	}
private:
	T CardPropertiesType;

};

class Properties
{
public:
	int value;
	char suit;

private:
};