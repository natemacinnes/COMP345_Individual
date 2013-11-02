#include "stdafx.h"
#include "ItemContainer.h"

ItemContainer::ItemContainer(void) 
{
	this->items;
}

ItemContainer::~ItemContainer() 
{

}

int ItemContainer::getSize() const
{
	return items.size();
}

Item* ItemContainer::at(int i) const 
{
	return items.at(i);
}

void ItemContainer::add(Item &item)
{
	items.push_back(&item);
}

void ItemContainer::remove(Item &item)
{
	/*
	unsigned int i = 0;
	while(!item.equals(items[i]))
	*/
}