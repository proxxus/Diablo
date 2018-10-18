#include "stdafx.h"
#include "Avatar.hpp"

Avatar::Avatar()
{
	myHealth = GetMaxHealth();
	myStamina = GetMaxStamina();
	myStrength = 10;
	myAgility = 5;
}


int Avatar::GetStrength()
{
	return myStrength;
}

int Avatar::GetStamina()
{
	return myStamina;
}

int Avatar::GetAgility()
{
	return myAgility;
}

int Avatar::GetAttackValue()
{
	return (myStrength * myAgility);
}

int Avatar::GetAttackSpeed()
{
	return myAgility;
}

int Avatar::GetDefenceValue()
{
	return (myAgility / 8);
}

int Avatar::GetMaxHealth()
{
	return (myStamina * 4) + (myStrength * 6) + (myAgility * 3);
}

int Avatar::GetMaxStamina()
{
	return (myStamina * 7) + (myStrength * 7);
}

int Avatar::GetMaxCapacity()
{
	return myStrength + (myAgility / 3);
}

void Avatar::SetStrength(int aNewStrength)
{
	myStrength = aNewStrength;
}

void Avatar::SetStamina(int aNewStamina)
{
	myStamina = aNewStamina;
}

void Avatar::SetAgility(int aNewAgility)
{
	myAgility = aNewAgility;
}
