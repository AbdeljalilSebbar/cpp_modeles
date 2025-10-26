#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice( void );
	Ice( const Ice& other );
	Ice( std::string type );

	std::string	getType( void ) const;
	AMateria	*clone( void ) const = 0;
	void	use( ICharacter &target );

	Ice& operator=( const Ice& other );
	~Ice( void );
};

#endif