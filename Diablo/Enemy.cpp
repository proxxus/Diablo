#include "stdafx.h"
#include "Enemy.hpp"
#include "Utilities.hpp"

Enemy::Enemy()
{
	myHealth = Utilities::GetRandomNumber(10, 100);
}
