#pragma once
#include "Observer.h"
#include <list>

using namespace std;

class IItemContainer
{
public:
	virtual ~IItemContainer(void);

	virtual void attach(Observer*);

	virtual void detach(Observer*);

	virtual void notify();

protected:
	IItemContainer(void);

private:
	list<Observer*> *_observers;
};