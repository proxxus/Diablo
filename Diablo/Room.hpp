#pragma once
#include <vector>
#include "Enemy.hpp"
#include "Item.hpp"
#include "Door.hpp"

class Room
{
public:
	Room(int anEnemyCount, int anItemCount);
	~Room();

	void AddDoor(int anIndex);

#pragma region Getters and Setters
	std::vector<Enemy> GetEnemies();
	std::vector<Item> GetItems();
	std::vector<int> GetDoors();
#pragma endregion

private:
	std::vector<Enemy> myEnemies;
	std::vector<Item> myItems;
	std::vector<int> myDoors;
};