//
// Created by Hajar Sabir on 2/28/22.
//

#ifndef CPPP_KAREN_H
#define CPPP_KAREN_H

#include <iostream>

class Karen {
public:
	Karen();
	~Karen();

	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();

	typedef void (Karen::*f)();
};


#endif //CPPP_KAREN_H
