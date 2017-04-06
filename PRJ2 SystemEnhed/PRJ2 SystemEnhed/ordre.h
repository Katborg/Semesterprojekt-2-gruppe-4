#pragma once
#include <string>

class ordre
{

public:

	ordre(std::string type_ = "", int antal_ = 0);
	std::string gettype() const;
	int getantal() const;
	int getid() const;
	bool operator != (const ordre &a) const;

private:
	std::string type_;	//type som vi evt skal �ndre til int s� vi nemmer kan sende den
	int antal_;
	int id_;
	static int nextid_;

};
std::ostream& operator << (std::ostream& out, const ordre& a);