#ifndef ARRAY_H
#define ARRAY_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include <stdexcept>

template<typename T>

class Array
{
public:
	class OutOfLength : public std::exception {
	public:
		const char *what() const throw() {
			return ("This element is out of the limits");
		};
	};

	Array<T>()
	{
		array = new T[0];
		m_size = 0;
	}
	Array<T>(unsigned int n)
	{
		array = new T[n];
		m_size = n;
	}
	Array<T>(const Array<T>& other) :
			array(new T[other.m_size]),
			m_size(other.m_size) {
		for (unsigned int i = 0; i < other.m_size; ++i)
			this->array[i] = other.array[i];
	}
	Array<T>	&operator=(const Array<T> &other)
	{
		if (this != &other) {
			delete [] this->array;
			this->m_size = other.m_size;
			this->array = new T[other.m_size];
			for (unsigned int i = 0; i < other.m_size; ++i)
				this->array[i] = other.array[i];
		}
		return (*this);
	}
	~Array<T>()
	{
		delete [] array;
		array = NULL;
	}
	unsigned int		size() const {
		return m_size;
	};
	T&					operator[](unsigned int i) {
		if (i >= m_size)
			throw OutOfLength();
		return array[i];
	}

private:
	T				*array;
	unsigned int	m_size;
};

#endif