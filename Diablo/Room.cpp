#include "stdafx.h"
#include "Room.hpp"

Room::Room(int anEnemyCount, int anItemCount)
{
	for (int index = 0; index < anEnemyCount; index++)
	{
		myEnemies.push_back(Enemy());
	}

	for (int index = 0; index < anItemCount; index++)
	{
		myItems.push_back(Item());
	}
}

void Room::AddDoor(int anIndex)
{
	myDoors.push_back(anIndex);
}
