#pragma once
#include "chestbuilder.h"

namespace d20Items
{

class LeveledChestBuilder :
	public ChestBuilder
{
public:
	LeveledChestBuilder(void);

	LeveledChestBuilder(int);

	virtual ~LeveledChestBuilder(void);

	//virtual void createNewChest();

	void buildRandomItems();

private:
	int level;
};

} //d20Items namespace