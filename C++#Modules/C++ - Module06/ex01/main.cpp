#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main(void){
	Data *_int = new Data;

	_int->_raw = 1337;
	
	std::cout << "Data->_raw = " << _int->_raw << std::endl;
	uintptr_t uptr = serialize(_int);

	Data *data = deserialize(uptr);
	
	std::cout << "Data1->_raw = " << data->_raw << std::endl;
	
}
