#pragma once
#include <string>

struct ordre
{
	std::string type;
	int antal;

	ordre(std::string type = "", int antal = 0)
		:type(type), antal(antal) {}
};