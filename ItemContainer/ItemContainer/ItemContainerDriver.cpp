//Property of Nathan MacInnes 1957341
//Concordia University
//Driver for the ItemContainer

#include "stdafx.h"
#include "Item.h"
#include "Weapon.h"
#include "Helmet.h"
#include "Armor.h"
#include "Shield.h"
#include "Ring.h"
#include "Belt.h"
#include "Boots.h"
#include "IItemContainer.h"
#include "ItemContainer.h"
#include "Observer.h"
#include "ConsoleOut.h"
#include <string> 
#include <ctime>
#include <cstdlib>

using namespace std;

void printVector(vector<Item*>&);

int main()
{
	
	srand(time(NULL));
	/*
	vector<Item*> itemContainer;
	*/
	Item* weapon1 = new Weapon("Sword of Ice Storm");
	Item* helmet1 = new Helmet("Ice Storm Heml");
	Item* armor1 = new Armor("Ice Storm Armor");
	Item* shield1 = new Shield("Ice Storm Shield");
	Item* ring1 = new Ring("Ice Storm Shield");
	Item* belt1 = new Belt("Ice Storm Belt");
	Item* boots1 = new Boots("Ice Storm Boots");
	
	ItemContainer *chest = new ItemContainer;

	//ConsoleOut *output = new ConsoleOut(chest);

	/*
	itemContainer.push_back(weapon1);
	itemContainer.push_back(helmet1);
	itemContainer.push_back(armor1);
	itemContainer.push_back(shield1);
	itemContainer.push_back(ring1);
	itemContainer.push_back(belt1);
	itemContainer.push_back(boots1);


	printVector(itemContainer);
	*/
	/*
	Weapon weapon1("Sword of Ice Strom");
	Helmet helmet1("Ice Storm Helm");
	Armor armor1("Ice Storm Armor");
	Shield shield1("Ice Storm Shield");
	Ring ring1("Ice Storm Ring");
	Belt belt1("Ice Storm Belt");
	Boots boots1("Ice Storm Boots");
	*/


	system("pause");


	return 0;
}

void printVector(vector<Item*> &items) 
{
	for( unsigned int i = 0; i < items.size(); i++)
	{
		cout << (*items[i]).toString() << endl;
	}
}