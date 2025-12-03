#include "Span.hpp"

Span::Span( void ):
	maxStore(0)
{
	std::cout << "Default Constructor Called!" << std::endl;
}

Span::Span( unsigned int N ):
	maxStore(N)
{
	std::cout << "Constructor Called!" << std::endl;
}

Span::Span( const Span& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Called!" << std::endl;
}

Span& Span::operator=( const Span& other ) {
	if (this != &other) {
		this->maxStore = other.maxStore;
		this->spanArr = other.spanArr;
		std::cout << "Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

void	Span::addNumber( int addNum ) {
	if (this->spanArr.size() >= maxStore)
		throw std::out_of_range("You Reach To Max Of Elements");
	this->spanArr.push_back(addNum);
}

unsigned int	Span::shortestSpan( void ) {
	if (spanArr.empty() || spanArr.size() == 1)
		throw std::out_of_range("Bad Using Of Span");
	std::vector<int> tmp(spanArr);
	std::sort(tmp.begin(), tmp.end());
	unsigned int shortSpan = static_cast<unsigned int>(-1);
	for (std::size_t i = 0; i < tmp.size() - 1; i++)
	{
		unsigned int sub = tmp[i + 1] - tmp[i];
		if (sub < shortSpan)
			shortSpan = sub;
	}
	return shortSpan;
}

unsigned int	Span::longestSpan( void ) {
	if (spanArr.empty() || spanArr.size() == 1)
		throw std::out_of_range("Bad Using Of Span");
	int minValue = *std::min_element(spanArr.begin(), spanArr.end());
	int maxValue = *std::max_element(spanArr.begin(), spanArr.end());

	return static_cast<unsigned int>(maxValue - minValue);
}
void	Span::addNumberOneCall( const std::vector<int>& newValues ) {
	if (maxStore < spanArr.size() + newValues.size())
		throw std::out_of_range("Can't Add More Then The Max Of This Span");
	spanArr.insert(spanArr.end(), newValues.begin(), newValues.end());
}


Span::~Span( void ) {
	std::cout << "Destructor Called!" << std::endl;
}
