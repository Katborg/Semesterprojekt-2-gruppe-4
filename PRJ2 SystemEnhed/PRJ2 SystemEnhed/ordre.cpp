#include "ordre.h"
int ordre::nextid_ = 0;

ordre::ordre(std::string type, int antal)
	:type_(type), antal_(antal > 0 ? antal : 0) {
	id_ = nextid_++;
}

std::string ordre::gettype() const
{
	return type_;
}

int ordre::getantal() const
{
	return antal_;
}

int ordre::getid() const
{
	return id_;
}

bool ordre::operator != (const ordre &a) const {

	return !(type_ == a.type_ && antal_ == a.antal_);

}

std::ostream& operator << (std::ostream& out, const ordre& a)
{
	out << "ordrenr: " << a.getid() << " type: " << a.gettype() << " antal: " << a.getantal();
	return out;
}

