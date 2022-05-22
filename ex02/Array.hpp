#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class	Array
{
private:
	size_t	_size;
	T*		_ptr;
public:
	Array( void ) :_size(0), _ptr(NULL) {}
	Array(unsigned int n) :_size(0), _ptr(NULL)
	{
		if (n == 0)
		return ;
		_ptr = new T[n];
		_size = n;
	}
	Array(const Array& to_copy) :_size(0), _ptr(NULL) { *this = to_copy; }
	~Array()
	{
		delete[] _ptr;
		_ptr = NULL;
	}
	Array& operator=(const Array& to_assign)
	{
		if (this != &to_assign)
		{
			if (_ptr)
				delete[] _ptr;
			_size = to_assign._size;
			_ptr = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_ptr[i] = to_assign._ptr[i];
		}
		return (*this);
	}
	T& operator[](size_t index)
	{
		if (index < 0 || index >= _size)
			throw OutOfRangeException();
		return _ptr[index];
	}
	T operator[](size_t index) const
	{
		if (index < 0 || index >= _size)
			throw OutOfRangeException();
		return _ptr[index];
	}
	size_t	size() const { return _size; }
	class	OutOfRangeException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("OutOfRangeException");
			}
	};
	
};

#endif	