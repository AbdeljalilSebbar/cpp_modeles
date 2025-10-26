#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
	{
		sourceMate[i] = NULL;
	}
	std::cout << "Default Constructor Called!" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
	
}
MateriaSource::MateriaSource()