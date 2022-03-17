/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/17/22.
 */

#ifndef CPP_MODULE_SCALAR_HPP
#define CPP_MODULE_SCALAR_HPP

#include <iostream>

class Scalar {
private:
	Scalar();

public:
	~Scalar();

	static void convert(const std::string &a);
};


#endif //CPP_MODULE_SCALAR_HPP
