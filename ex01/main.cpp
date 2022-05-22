#include <iostream>
#include "iter.hpp"

template <typename T>
void	increaseByOne(T& a)
{
	a++;
}

int main( void ) 
{
	int		arr[5];
	char	char_arr[3];

	arr[0] = 22;
	arr[1] = -34;
	arr[2] = 14;
	arr[3] = 274;
	arr[4] = 4573;
	char_arr[0] = '3';
	char_arr[1] = 'f';
	char_arr[2] = '[';
	::iter(arr, 5, increaseByOne);
	for(int	i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;
	::iter(char_arr, 3, increaseByOne);
	for(int	i = 0; i < 3; i++)
		std::cout << char_arr[i] << std::endl;
	return 0;
}