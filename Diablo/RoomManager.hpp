#pragma once
#include <vector>
#include "Room.hpp"

class RoomManager
{
public:
	RoomManager();
	void AddRoom();
	int LinkRooms(int aFirstRoomIndex, int aSecondRoomIndex);

private:
	int myCurrentRoom;
	std::vector<Room> myRooms;
	std::vector<Door> myDoors;
};