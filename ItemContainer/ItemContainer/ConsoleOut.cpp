#include "stdafx.h"
#include "ConsoleOut.h"


ConsoleOut::ConsoleOut(ItemContainer* items)
{
	_items = items;
	_items->attach(this);
}


ConsoleOut::~ConsoleOut(void)
{
	_items->detach(this);
}

void ConsoleOut::update(IItemContainer* modifiedIC)
{
	if(modifiedIC == _items)
	{
		output();
	}	
}

void ConsoleOut::output(void)
{
	for( unsigned int i = 0; i < _items->getSize(); i++)
	{
		cout << (_items->at(i)->toString()) << endl;
	}
}

