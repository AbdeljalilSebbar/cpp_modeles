#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Length, typename Func>

void	iter(T* first, Length second, Func third) {
	for (Length i = 0; i < second; i++)
	{
		third(first[i]);
	}
}

#endif