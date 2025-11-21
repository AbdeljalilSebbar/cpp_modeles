#include "Data.hpp"

Data::Data(int id, std::string name): Id(id), name(name)
{
    std::cout << "Call the Data struct constructor" << std::endl;
}