#pragma once
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

ordre::ordre(std::string type, int antal)
	:type_(type), antal_(antal > 0 ? antal : 0) {}

std::string ordre::gettype() const
{
	return type_;
}

int ordre::getantal() const
{
	return antal_;
}

bool ordre::operator != (const ordre &a) const {

	return !(type_ == a.type_ && antal_ == a.antal_);

}

std::ostream& operator << (std::ostream& out, const ordre& a)
{
	out << " type: " << a.gettype() << " antal: " << a.getantal();
	return out;
}

