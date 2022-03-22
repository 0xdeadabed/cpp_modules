/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/18/22.
 */

#ifndef CPP_MODULE_DATA_HPP
#define CPP_MODULE_DATA_HPP

#include <iostream>
//#include <cstdint>

struct Data {
	unsigned int n;
};

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

#endif //CPP_MODULE_DATA_HPP
