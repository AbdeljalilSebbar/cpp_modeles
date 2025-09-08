#include "copyfile.hpp"

copyFile::~copyFile()
{}

//write to the file  replace(index, n, to); index:find str, n:size str, to:new string

std::string replaceString(std::string readingLine, std::string &newString, std::string &oldString)
{
	int index;
	int start = 0;
	std::string res;
	while ((index = readingLine.find(oldString, start)) != std::string::npos)
	{	
		res += readingLine.substr(start, index - start);
		
		res += newString;

		start = index + oldString.length();
	}
	res += readingLine.substr(start);
	return res;
}

int copyFile::writeToFile( std::string s1, std::string s2)
{
	std::ifstream readFile(fileName); // read from file

	std::string readingLine;
	std::string newLine;

	fileName += ".replace";
	std::ofstream myNewFile(fileName); // create the file and open

	while (getline(readFile, readingLine))
	{
		newLine = replaceString(readingLine, s2, s1);

		myNewFile << newLine;
	}

	readFile.close();
	myNewFile.close();
	return 0;
}
