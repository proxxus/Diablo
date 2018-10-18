#pragma once
#include <vector>
#include "Enemy.hpp"
#include "Item.hpp"
#include "Door.hpp"

class Room
{
public:
#pragma region Getters
	
	~Room();


private:
	std::vector<Enemy> myEnemies;
	std::vector<Item> myItems;
	std::vector<Door>
};