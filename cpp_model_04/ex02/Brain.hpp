/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:27:23 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:27:24 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain( void );
	Brain( std::string initArr );
	Brain( const Brain& other );

	Brain& operator=( const Brain& other );

	void	getIdea( int index ) const;
	void	setIdeas( int index, std::string setIdea );

	~Brain( void );
};

#endif