#pragma once
#include <vector>
#include "IItemContainer.h"
#include "Item.h"
#include "Observer.h"

class ItemContainer : 
	public IItemContainer
{
private:
	//Vector to hold items in the container
	vector<Item*> items;

public:

	ItemContainer ();
	
	virtual ~ItemContainer();

	int getSize() const;

	Item* at(int) const;

	void add(Item&);
	
	void remove(Item&);

};

