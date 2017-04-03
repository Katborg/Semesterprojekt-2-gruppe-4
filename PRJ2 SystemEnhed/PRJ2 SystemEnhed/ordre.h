#pragma once
#include <string>


struct ordre
{

	std::string type;	//type som vi evt skal ændre til int så vi nemmer kan sende den
	int antal;

	

	ordre(std::string type = "", int antal = 0)
		:type(type), antal(antal) {

	}

	friend std::ostream& operator << (std::ostream& out, const ordre &a) {

		out << a.type << " antal: " << a.antal;
		return out;

	}

	bool ordre::operator != (const ordre &a) const {

		return !(type == a.type && antal == a.antal);

	}
};