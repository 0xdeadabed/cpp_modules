/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/18/22.
 */

#include <data.hpp>

int main() {
	std::cout << "-------------------------test0---------------------------" << std::endl;
	Data *data;
	Data *des;
	uintptr_t ser;

	data = new Data;

	std::cout << "Data			: " << data << std::endl;
	ser = serialize(data);
	std::cout << "serialized		: " << ser << std::endl;
	des = deserialize(ser);
	std::cout << "deserialized raw	: " << des << std::endl;

	delete data;
	
	std::cout << "-------------------------test1---------------------------" << std::endl;
	Data *data1;
	Data *des1;
	uintptr_t ser1;

	data1 = new Data;
	
	std::cout << "Data			: " << data1 << std::endl;
	ser1 = serialize(data1);
	std::cout << "serialized		: " << ser1 << std::endl;
	des1 = deserialize(ser1);
	std::cout << "deserialized raw	: " << des1 << std::endl;

	delete data1;

	return 0;
}

