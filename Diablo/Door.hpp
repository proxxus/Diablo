#pragma once

class Door
{
public:
    Door(int aFirstRoom, int aSecondRoom);
	~Door();
private:
	int myFirstRoomIndex;
	int mySecondRoomIndex;
};