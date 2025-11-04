#include "AForm.hpp"

AForm::AForm( void ):
	name("Default"), signe(false), grade_sign(150), grade_exe(150)
{
	std::cout << "Default Constructor Of AForm Called!" << std::endl;
}

AForm::AForm( std::string initName, int gradeSign, int gradeExe ):
	name(initName), signe(false), grade_sign(gradeSign), grade_exe(gradeExe)
{
	std::cout << "Constructor Of AForm Called!" << std::endl;
	if (grade_exe < 1 || grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if (grade_exe > 150 || grade_sign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& other ):
	name(other.getName()), grade_sign(other.getGradeSign()), grade_exe(other.getGradeExe())
{
	*this = other;
	std::cout << "Copy Assignment Constructor Of AForm Called!" << std::endl;
}

std::string AForm::getName( void ) const{
	return this->name;
}

bool AForm::getSigne( void ) const{
	return this->signe;
}

int AForm::getGradeSign( void ) const{
	return this->grade_sign;
}

int AForm::getGradeExe( void ) const{
	return this->grade_exe;
}

void    AForm::beSigned( const Bureaucrat& m ) {
	if (m.getGrade() > this->grade_sign)
		throw AForm::GradeTooLowException();
	this->signe = true;
}

AForm& AForm::operator=( const AForm& other ) {
	if (this != &other) {
		this->signe = other.signe;
		std::cout << "Copy Assignment Operator Of AForm Called!" << std::endl;
	}
	return *this;
}

std::ostream& operator<<( std::ostream& os, const AForm& other ) {
	os 
	<< " AForm NAME: " << other.getName()
	<< "\n AForm Grade Required To Sign: " << other.getGradeSign()
	<< "\n AForm Grade Required To Execute: " << other.getGradeExe()
	<< "\n AForm Status Of Signe: " << other.getSigne();
	return os;
}

const char* AForm::GradeTooHighException::what( void ) const throw(){
	return "Grade Too High!!!";
}

const char* AForm::GradeTooLowException::what( void ) const throw(){
	return "Grade Too Low!!!";
}

const char* AForm::FormNotSignedException::what( void ) const throw(){
	return "Form Not Being Signed!!";
}

AForm::~AForm( void ) {
	std::cout << "Destructor Of AForm Called!" << std::endl;
}

