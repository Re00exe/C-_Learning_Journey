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
	Data *data = new Data;

	data->_raw = 1337;
	
	std::cout << "Data->_raw = " << data->_raw << std::endl;
	uintptr_t uin = serialize(data);
	
	Data *data2 = deserialize(uin);

	std::cout << "Data2->_raw = " << data2->_raw << std::endl;
	
	std::cout << (data == data2) << std::endl;
}
