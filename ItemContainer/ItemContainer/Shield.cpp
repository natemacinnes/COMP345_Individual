#include "stdafx.h"
#include "Shield.h"

namespace d20Items {

// The number of Shield enchantments
const int Shield::SIZE= 1;
// Array of valid Shield enchantments
const EnchantmentType Shield::ENCHANTMENTS[SIZE] = {ARMOR_CLASS};

Shield::Shield(void)
{
	//Item("Shield of ");
	enchantment.setEnchantmentType(ENCHANTMENTS,SIZE);
	enchantment.setEnchantmentValue();
}

Shield::Shield(std::string newName) 
	: Item(newName) 
{
	enchantment.setEnchantmentType(ENCHANTMENTS,SIZE);
	enchantment.setEnchantmentValue();
}


Shield::~Shield(void)
{
}

std::string Shield::getName() const 
{
	return name;
}

Enchantment Shield::getEnchantment() const {
	return enchantment;
}

std::string Shield::toString() const {
	return name + " " + enchantment.toString();
}
} // namespace d20Items 