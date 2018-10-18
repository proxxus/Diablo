#pragma once

class Avatar
{
public:
	Avatar();
	~Avatar() = delete;

#pragma region Getters and Setters
	int GetStrength();
	int GetStamina();
	int GetAgility();

	int GetAttackValue();
	int GetAttackSpeed();
	int GetDefenceValue();

	int GetMaxHealth();
	int GetMaxStamina();
	int GetMaxCapacity();

	void SetStrength(int aNewStrength);
	void SetStamina(int aNewStamina);
	void SetAgility(int aNewAgility);
#pragma endregion
private:
	int myHealth;
	int myStamina;
	int myStrength;
	int myAgility;
};