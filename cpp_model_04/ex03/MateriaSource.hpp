/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:49 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:50 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *sourceMate[4];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& other );

	MateriaSource& operator=( const MateriaSource& other );

	void learnMateria( AMateria *ameta );
	AMateria *createMateria( std::string const &type );

	~MateriaSource();
};

#endif