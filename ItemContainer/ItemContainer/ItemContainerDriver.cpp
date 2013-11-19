///*****************************************************//
//******* Assignent 3: Builder Pattern ****************//
//		Property of Nathan MacInnes 1957341
//			Concordia University

//		Driver for the ItemContainer

#include "stdafx.h"
#include "IItemContainer.h"
#include "ItemContainer.h"
#include "ItemObserver.h"
#include "ConsoleOut.h"
#include "Item.h"
#include "Weapon.h"
#include "Helmet.h"
#include "Armor.h"
#include "Shield.h"
#include "Ring.h"
#include "Belt.h"
#include "Boots.h"
#include "Bow.h"
#include "ChestBuilder.h"
#include "ChestDirector.h"
#include "LeveledChestBuilder.h"
#include "RandomChestBuilder.h"
#include <string> 
#include <ctime>
#include <cstdlib>

using namespace std;

using namespace d20Items;

// receive user input to remove an item from the container
void removeItem(ItemContainer*&);

int main()
{
	cout << "The following is a small example of the Builder Pattern" << endl;
	cout << "implemented on the Item Container." << endl << endl;
	
	// set time to null for the random function
	srand(time(NULL));

	cout << "Initializing the Chest Director..." << endl;
	ChestDirector cDirector;


	cout << "Initializing the Leveled Chest Builder and the Random Chest Builder." << endl <<endl;
	ChestBuilder* lChestBuilder = new LeveledChestBuilder(5);
	ChestBuilder* rChestBuilder = new RandomChestBuilder();

	cout << "Telling the director to use the Leveled Chest Builder to" << endl;
	cout << "build a chest (ItemContainer) with the Leveled Chest Builder." << endl;
	cDirector.setChestBuilder(lChestBuilder);
	cDirector.constructChest();
	
	cout << "Getting the chest buiilt by the Chest Director" << endl << endl;
	ItemContainer* leveledChest = cDirector.getChest();

	cout << "Telling the director to use the Leveled Chest Builder to" << endl;
	cout << "build a chest (ItemContainer) with the Random Chest Builder." << endl;
	cDirector.setChestBuilder(rChestBuilder);
	cDirector.constructChest();

	cout << "Getting the chest buiilt by the Chest Director" << endl << endl;
	ItemContainer* randomChest = cDirector.getChest();

	cout << "Here is a Random Chest: " << endl;
	ConsoleOut *outputLeveled = new ConsoleOut(leveledChest);

	cout << "Here is a Random Chest: " << endl;
	ConsoleOut *outputRandom = new ConsoleOut(randomChest);



	cout << endl;
	cout << "This has been a demo of Nathan MacInnes's Item Container and the Builder Pattern." << endl;
	cout << "Peace out! And enjoy the winter holidays!" << endl;

	// Wait for user input to end the program
	system("pause");

	return 0;
}

void removeItem(ItemContainer* &items) {
	int itemNumber = -1;
	char confirm = NULL;

	cout << "If you would like to remove an item," << endl;
	cout << "enter the number corresponding to " << endl;
	cout <<	"the item you would like to remove." << endl;
	cout << "If you do not wish to remove a number enter 0" << endl;

	

	do 
	{
		cin >> itemNumber;
		cout << endl;
		if(itemNumber == 0)
			break;
		if(itemNumber <= items->getSize()) {
			cout << "Removing " << items->at(itemNumber - 1)->toString() << endl;
			items->remove(items->at(itemNumber - 1));
		}
		else
		{
			cout << "That is not a valid choice" << endl;
		}
	}
	while(itemNumber != 0);
}