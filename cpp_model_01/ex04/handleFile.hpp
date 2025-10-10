/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleFile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:02:33 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:02:34 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLEFILE_HPP
#define HANDLEFILE_HPP

#include <string>
#include <iostream>
#include <fstream>

class HandleFile
{
private:
	std::string fileName;
public:
	HandleFile(std::string initfile);
	int copyFileWithReplace(std::string s1, std::string s2);
	~HandleFile(void);
};

#endif
