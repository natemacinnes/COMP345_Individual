#include "stdafx.h"
#include "Boots.h"

namespace d20Items {

const int Boots::SIZE= 2;
const EnchantmentType Boots::ENCHANTMENTS[SIZE] = {ARMOR_CLASS, DEXTERITY};

Boots::Boots(void)
{
	Item();
}

Boots::Boots(std::string newName) 
	: Item(newName) 
{
	name = newName;
	enchantment.setEnchantmentType(ENCHANTMENTS,SIZE);
	enchantment.setEnchantmentValue();

}


Boots::~Boots(void)
{
}

std::string Boots::getName() const 
{
	return this->name;
}

Enchantment Boots::getEnchantment() const 
{
	return enchantment;
}

std::string Boots::toString() const
{
	return this->getName() + " " + enchantment.toString();
}
} // namespace d20Items 