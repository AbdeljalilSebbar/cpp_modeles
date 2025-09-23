/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleFile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:02:19 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 15:02:52 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handleFile.hpp"

HandleFile::HandleFile(std::string initFile)
{
	fileName = initFile;
}

HandleFile::~HandleFile()
{
}

std::string myReplaceFun( std::string s1, std::string s2, std::string line ) {
	size_t index = 0;
	size_t start = 0;
	std::string res;
	while ((index = line.find(s1, start)) != std::string::npos) {
		res += line.substr(start, index - start);
		res += s2;
		start = index + s1.length();
	}
	res += line.substr(start);
	return res;
}

int HandleFile::copyFileWithReplace( std::string s1, std::string s2 ) {
	std::ifstream inFile(fileName);
	if (inFile.is_open()) {
		std::string line;
		std::string replacedLine;
		fileName += ".replace";
		std::ofstream outFile(fileName);
		if (outFile.is_open()) {
			while (std::getline(inFile, line))
			{
				if (!inFile.eof())
					line += "\n";
				replacedLine = myReplaceFun(s1, s2, line);
				outFile << replacedLine;
			}
			outFile.close();
		}
		inFile.close();
	}
	else
	{
		std::cout << "Can't Find Or Open This File: " << fileName << std::endl;
		return 1;
	}
	return 0;
}
