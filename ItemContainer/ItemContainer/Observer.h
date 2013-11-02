#pragma once
#include "IItemContainer.h"

class Observer
{
public:
	~Observer(void);
	virtual void update(IItemContainer* _itemContainer) = 0;

protected:
	Observer(void);

};

