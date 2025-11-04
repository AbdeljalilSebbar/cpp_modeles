#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ):
	AForm("Default", 72, 45), target("Default")
{
	std::cout << "Default Constructor Of RobotomyRequestForm Called!!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string initTarget ):
	AForm(initTarget, 72, 45), target(initTarget)
{
	std::cout << "Constructor Of RobotomyRequestForm Called!!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ):
	AForm(other), target(other.target)
{
	std::cout << "Copy Assignment Constructor RobotomyRequestForm Called!" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	if (this != &other) {
		AForm::operator=(other);
		this->target = other.target;
		std::cout << "Copy Assignment Operator RobotomyRequestForm Called!" << std::endl;
	}
	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const{
	if (!this->getSigne())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeExe())
		throw GradeTooLowException();
	std::cout << "* Makes some drilling noise *" << std::endl;

	std::srand(std::time(NULL)); // seed once each program run
	if (std::rand() % 2)
		std::cout << this->target << " HAS BEEN ROBOTOMIZED SUCCESSFULLY 50% OF THE TIME" << std::endl;
	else
		std::cout << "THE ROBOTOMY FAILED." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "Destructor Of RobotomyRequestForm Called!" << std::endl;
}
