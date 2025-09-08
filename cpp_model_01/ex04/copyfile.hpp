#ifndef COPY_HPP
#define COPY_HPP

#include <iostream>
#include <fstream>
#include <string>

class copyFile
{
    private:
        std::string fileName;
    public:
        int writeToFile( std::string s1, std::string s2);
        copyFile( std::string name): fileName(name) {};
        ~copyFile( void );
};


#endif