#include <iostream>
#include "Array.hpp"

int main( void ) 
{
	try
	{
		Array<int>			int_test(15);
		Array<std::string>	string_test(15);
		Array<float>		empty_test;

		int_test[2] = 42;
		std::cout << int_test[14] << std::endl;
		std::cout << int_test[2] << std::endl;
		std::cout << string_test[5] << std::endl;
		string_test[5] = "Howdy, this string is stored in array.";
		std::cout << string_test[5] << std::endl;
		Array<std::string>	copy_test(string_test);
		std::cout << copy_test[5] << std::endl;
		std::cout << empty_test.size() << std::endl;
		std::cout << empty_test[1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}