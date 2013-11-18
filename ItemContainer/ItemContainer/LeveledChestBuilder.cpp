#include "stdafx.h"
#include "LeveledChestBuilder.h"

namespace d20Items
{

LeveledChestBuilder::LeveledChestBuilder(int level)
{
	this->level = level;
}

LeveledChestBuilder::~LeveledChestBuilder(void)
{
}

/*
void LeveledChestBuilder::createNewChest()
{
	//chest = new ItemContainer;
}
*/
// takes in level in this instance, in game will take in a character object
void LeveledChestBuilder::buildRandomItems()
{
	int eValue = 1 + (rand() + level) % 5;
	int CHEST_SIZE = (rand() + level) % 20;

	for(int i = 0; i < CHEST_SIZE; i++)
	{
		Item* item;

		item = createRandomItem();

		item->getEnchantment().setEnchantmentValue(eValue);
		
		chest->add(item);

	}
}

} // d20Items namespace