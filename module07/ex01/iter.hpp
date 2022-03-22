/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/22/22.
 */

#ifndef CPP_MODULE_ITER_HPP
#define CPP_MODULE_ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, std::size_t len, void (*f)(const T&)) {
	for (std::size_t i = 0; i < len; ++i) {
		f(array[i]);
	}
}

#endif //CPP_MODULE_ITER_HPP
