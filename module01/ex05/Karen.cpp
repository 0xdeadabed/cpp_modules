//
// Created by Hajar Sabir on 2/28/22.
//

#include "Karen.h"

Karen::Karen() {}
Karen::~Karen() {}

void Karen::complain(std::string level) {
	static const int kLevels = 4;

	std::string complainLevels[kLevels] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	f functions[kLevels] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (int i = 0; i < kLevels; i++){
		if (complainLevels[i].compare(level) == 0) {
			(this->*(functions[i]))();
			return;
		}
	}
	std::cerr << "Error: Invalid complain level" << std::endl;
}

void Karen::debug() {
	std::cout
		<< "[ DEBUG ]\n"
		<< " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I really do!"
		<< std::endl;
}

void Karen::info() {
	std::cout
		<< "[ INFO ]\n"
		<< "cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void Karen::warning() {
	std::cout
		<< "[ WARNING ]\n"
		<< "think I deserve to have some extra bacon for free."
		<< "’ve been coming for years whereas you started working here since last month."
		<< std::endl;
}

void Karen::error() {
	std::cout
		<< "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
