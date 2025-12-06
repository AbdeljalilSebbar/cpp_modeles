/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:16:49 by abdsebba          #+#    #+#             */
/*   Updated: 2025/12/06 13:16:51 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>

int main() {

//**********************************************************/
//														    /
//				TEST STACK => MutantStack<T>				/
//															/
//**********************************************************/

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "size of stack: " <<  mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

//**********************************************************/
//														    /
//				TEST LIST => STD::LIST<T>					/
//															/
//**********************************************************/

	std::cout << "\n--- LIST TEST ---\n";

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << "back element: " << lst.back() << std::endl;

	lst.pop_back();
	std::cout << "size of list: " << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::cout << "size of list: " << lst.size() << std::endl;

	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();

	++lit;
	--lit;

	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	return 0;
}
