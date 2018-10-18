#include "stdafx.h"
#include "Utilities.hpp"
#include <random>

namespace Utilities
{
	int GetRandomNumber(int aMinValue, int aMaxValue)
	{
		static std::random_device rndDevice;
		static std::mt19937 mt(rndDevice());
		std::uniform_int_distribution<unsigned> rndGen(aMinValue, aMaxValue);

		return rndGen(mt);
	}
}