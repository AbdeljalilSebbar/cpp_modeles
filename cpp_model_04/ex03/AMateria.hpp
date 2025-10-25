#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
protected:
	std::string const type;
public :
	AMateria( void );
	AMateria( std::string const &type );
	AMateria( AMateria const &other );

	std::string const	&getType( void ) const; // Returns the materia type
	virtual AMateria	*clone( void ) const = 0;
	virtual void	use( ICharacter &target );

	AMateria& operator=( const AMateria& other );
	~AMateria( void );
};

#endif