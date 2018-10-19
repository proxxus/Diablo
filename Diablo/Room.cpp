#include "stdafx.h"
#include "Room.hpp"

Room::Room(int anEnemyCount, int aDoorLinkID, int anItemCount)
{
	for (size_t index = 0; index < anEnemyCount; index++)
	{
		myEnemies.push_back(Enemy());
	}

	myLinkedDoor = aDoorLinkID;

	for (size_t index = 0; index < anItemCount; index++)
	{
		myItems.push_back(Item());
	}
}