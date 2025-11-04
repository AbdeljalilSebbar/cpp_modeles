#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string initName );
	ShrubberyCreationForm( const ShrubberyCreationForm& other );

	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );

	void	execute( Bureaucrat const & executor ) const;

	~ShrubberyCreationForm( void );
};

void drawASCII_Trees( int height );

#endif