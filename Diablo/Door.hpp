#pragma once

class Door
{
public:
    Door(int aFirstRoom, int aSecondRoom);
	~Door() = default;
private:
	int myFirstRoomIndex;
	int mySecondRoomIndex;
};