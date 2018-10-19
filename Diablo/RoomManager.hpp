#pragma once
#include <vector>
#include "Room.hpp"

class RoomManager
{
public:
	void AddRoom();
	void LinkRooms(Room& aFirstRoom, Room& aSecondRoom);
private:
	std::vector<Room> myRooms;
	std::vector<Door> myDoors;
};