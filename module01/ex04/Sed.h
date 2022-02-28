//
// Created by Hajar Sabir on 2/25/22.
//

#ifndef CPPP_SED_H
#define CPPP_SED_H

#include <iostream>

class Sed {
public:
	Sed();
	~Sed();

	static int replace(std::string const filename, std::string const s1, std::string const s2);

private:
	static std::string _strReplace(std::string line, std::string const s1, std::string const s2);
};


#endif //CPPP_SED_H
