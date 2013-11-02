#include "stdafx.h"
#include "IItemContainer.h"


IItemContainer::IItemContainer(void)
{
}

IItemContainer::~IItemContainer(void)
{
}

void IItemContainer::attach(Observer* o)
{
	_observers->insert(_observers->end(), o);
}

void IItemContainer::detach(Observer* o)
{
	_observers->remove(o);
}

void IItemContainer::notify()
{
	list<Observer*>::iterator i;
	for(i = _observers->begin; i != _observers->end(); i++)
		(*i)->update(this);
}