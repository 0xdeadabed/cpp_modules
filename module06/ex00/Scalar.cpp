/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/17/22.
 */

#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &other) { *this = other; }

Scalar::~Scalar() {}

Scalar &Scalar::operator=(const Scalar &other) {
	if (&other == this)
		return *this;
	return *this;
}

void Scalar::convert(const std::string &a) {
	std::string handler[6] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan" };
	std::string ischar = "";
	int isint = 0;
	float isfloat = 0;
	double isdouble = 0;

	if (a.size() > 1 && !std::isdigit(a[0])) {
		std::cout << "Error: only single character is allowed" << std::endl;
		return ;
	}

	if (a.size() == 1 && std::isprint(a[0]) && !std::isdigit(a[0])) {
		ischar = a[0];
		std::cout << "char   : " << ischar << std::endl;
		std::cout << "int    : " << static_cast<int>(a[0]) << std::endl;
		std::cout << "float  : " << static_cast<float>(a[0]) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(a[0]) << ".0" << std::endl;
		return ;
	}

	isint = std::atoi(a.c_str());
	if (a[a.length() - 1] == 'f') {
		isfloat = std::atof(a.c_str());
		isdouble = static_cast<double>(isfloat);
	} else {
		isdouble = std::atof(a.c_str());
		isfloat = static_cast<double>(isdouble);
	}
	for (int i = 0; i < 6; i++) {
		if (a == handler[i]) {
			ischar = "impossible";
			break;
		}
	}

	if (ischar == "" && std::isprint(isint)) {
		ischar = "'";
		ischar += static_cast<char>(isint);
		ischar += "'";
	} else if (ischar == "") {
		ischar = "char is not displayable.";
	}

	std::cout << "char : " << ischar << std::endl;
	if (ischar == "impossible") {
		std::cout << "int    : type conversion is impossible" << std::endl;
	} else {
		std::cout << "int    : " << isint << std::endl;
	}

	if (ischar == "impossible" && isfloat == 0) {
		std::cout << "float  : type conversion is impossible" << std::endl;
		std::cout << "double : type conversion is impossible" << std::endl;
	} else {
		if ( isfloat - static_cast<int>(isfloat) == 0) {
			std::cout << "float  : " << isfloat << ".0f" << std::endl;
			std::cout << "double : " << isdouble << ".0" << std::endl;
		} else {
			std::cout << "float  : " << isfloat << "f" << std::endl;
			std::cout << "double : " << isdouble << std::endl;
		}
	}
}
