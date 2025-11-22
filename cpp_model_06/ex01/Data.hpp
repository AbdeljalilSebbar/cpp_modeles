#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

struct Data {
    int Id;
    std::string name;
    Data(int id, std::string name);
    ~Data( void );
};

#endif