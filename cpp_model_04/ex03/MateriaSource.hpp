#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *sourceMate[4];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& other );

	MateriaSource& operator=( const MateriaSource& other );

	void learnMateria( AMateria *ameta );
	AMateria *createMateria( std::string const &type );

	~MateriaSource();
};

#endif