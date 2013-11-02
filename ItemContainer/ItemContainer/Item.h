#pragma once

#include "Enchantment.h"
#include <string>
#include <vector>

using  namespace std;

class Item	
{
public:
	Item(void);

	Item(string);
	
	virtual ~Item(void);

	string getName(void) const;

	void setName(string);

	//virtual void setEnchantment(int, int);

	virtual string toString(void) const;

	//virtual bool equal(Item*);

private:
	//Enchantment enchantment;
	string name;
};

