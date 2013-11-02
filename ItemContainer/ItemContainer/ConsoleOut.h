#pragma once
#include "observer.h"
#include "ItemContainer.h"

class ConsoleOut :
	public Observer
{

public:
	ConsoleOut(ItemContainer*);
	
	~ConsoleOut(void);

	void update(IItemContainer*);

	void output(void);

private:
	ItemContainer *_items;
};

