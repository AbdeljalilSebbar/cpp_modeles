#include "AMateria.hpp"

AMateria::AMateria( void ): type("Default") {
	std::cout << "Default constructor called in AMateria!" << std::endl;
}

AMateria::AMateria( std::string const &type ) {
	this->type = type;
	std::cout << "AMateria type:`" << type << "` Constructor called!" << std::endl;
}

AMateria::AMateria( AMateria const &other ) {
	*this = other;
	std::cout << "AMateria type:`" << type << "` Copy assignment Constructor called!" << std::endl;
}

AMateria& AMateria::operator=( const AMateria& other ) {
	if (this != &other) {
		this->type = other.type;
		std::cout << "AMateria type:`" << this->type << "` Copy assignment Operator called!" << std::endl;
	}
	return *this;
}

std::string const& AMateria::getType( void ) const{
	return this->type;
}

