/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/17/22.
 */

#ifndef CPP_MODULE_SCALAR_HPP
#define CPP_MODULE_SCALAR_HPP

#include <iostream>
#include <string>

class Scalar {
private:
	Scalar();
	Scalar(const Scalar &other);
	Scalar &operator=(const Scalar &other);
public:
	~Scalar();

	static void convert(const std::string &a);
};


#endif //CPP_MODULE_SCALAR_HPP
