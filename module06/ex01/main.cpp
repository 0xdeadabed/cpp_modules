/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/18/22.
 */

#include <data.hpp>

int main() {
	Data *data;

	uintptr_t ser;
	Data *des;

	data = new Data;

	std::cout << "Data			: " << data << std::endl;
	ser = serialize(data);
	std::cout << "serialized		: " << ser << std::endl;
	des = deserialize(ser);
	std::cout << "deserialized raw	: " << des << std::endl;

	delete data;

	return 0;
}
