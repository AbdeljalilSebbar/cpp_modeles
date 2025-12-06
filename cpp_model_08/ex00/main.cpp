/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:14:48 by abdsebba          #+#    #+#             */
/*   Updated: 2025/12/06 13:35:43 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);

	int searchValue = 50;

	easyfind(numbers, searchValue);
	easyfind(numbers, 300);

	return 0;
}
