#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string initTarget );
	PresidentialPardonForm( const PresidentialPardonForm& other );

	PresidentialPardonForm& operator=( const PresidentialPardonForm& other );

	void	execute( Bureaucrat const & executor ) const;

	~PresidentialPardonForm();
};


#endif
