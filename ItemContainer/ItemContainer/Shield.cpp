#include "stdafx.h"
#include "Shield.h"

namespace d20Items {

// The number of Shield enchantments
const int Shield::SIZE= 1;
// Array of valid Shield enchantments
const EnchantmentType Shield::ENCHANTMENTS[SIZE] = {ARMOR_CLASS};

Shield::Shield(void)
{
	Item();
}

Shield::Shield(std::string newName) 
	: Item(newName) 
{
	name = newName;
	enchantment.setEnchantmentType(ENCHANTMENTS,SIZE);
	enchantment.setEnchantmentValue();
}


Shield::~Shield(void)
{
}

std::string Shield::getName() const 
{
	return this->name;
}

Enchantment Shield::getEnchantment() const {
	return enchantment;
}

std::string Shield::toString() const {
	return this->getName() + " " + enchantment.toString();
}
} // namespace d20Items 