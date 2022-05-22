#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T	*arr, int len, void (f)(T& a))
{
	for(int	i = 0; i < len; i++)
		f(arr[i]);
}

#endif