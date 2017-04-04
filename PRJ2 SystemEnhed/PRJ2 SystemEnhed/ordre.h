#pragma once
#include <string>

class ordre
{

public:

	ordre(std::string type_ = "", int antal_ = 0);
	std::string gettype() const;
	int getantal() const;
	bool operator != (const ordre &a) const;

private:
	std::string type_;	//type som vi evt skal ændre til int så vi nemmer kan sende den
	int antal_;

};
std::ostream& operator << (std::ostream& out, const ordre& a);