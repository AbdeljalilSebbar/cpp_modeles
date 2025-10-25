#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure( void );
	Cure( const Cure& other );
	Cure( std::string type );

	std::string	getType( void ) const;
	AMateria	*clone( void ) const = 0;
	void	use( ICharacter &target );

	Cure& operator=( const Cure& other );
	~Cure();
};

#endif