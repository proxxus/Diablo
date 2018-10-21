#include "stdafx.h"
#include "RoomManager.hpp"

RoomManager::RoomManager()
:myCurrentRoom(0)
{
}

void RoomManager::AddRoom()
{

}

int RoomManager::LinkRooms(int aFirstRoomIndex, int aSecondRoomIndex)
{
	myDoors.push_back(Door(aFirstRoomIndex, aSecondRoomIndex));
}
