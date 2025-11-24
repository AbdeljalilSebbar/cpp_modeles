#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Func>

void	iter(T* first, size_t second, Func third) {
	for (size_t i = 0; i < second; i++)
	{
		third(first[i]);
	}
}

#endif