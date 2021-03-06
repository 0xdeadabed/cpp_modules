//
// Created by Hajar Sabir on 2/28/22.
//

#include "Karen.h"

Karen::Karen() {}
Karen::~Karen() {}

void Karen::complain(std::string level) {
	static const int kLevels = 4;
	int nLevel = -1;

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

	for (int i = 0; i < kLevels; i++) {
		if (complainLevels[i].compare(level) == 0) {
			nLevel = i;
			break;
		}
	}

	switch (nLevel) {
		case 0:
			(this->*(functions[0]))();
		case 1:
			(this->*(functions[1]))();
		case 2:
			(this->*(functions[2]))();
		case 3:
			(this->*(functions[3]))();
			break;
		default:
			std::cerr << "Error: Invalid complain level" << std::endl;
			break;
	}
}

void Karen::debug() {
	std::cout
		<< "[ DEBUG ]\n"
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I just love it!"
		<< '\n' << std::endl;
}

void Karen::info() {
	std::cout
		<< "[ INFO ]\n"
		<< "I cannot believe adding extra bacon cost more money."
		<< " You don’t put enough!"
		<< " If you did I would not have to ask for it!"
		<< '\n' << std::endl;
}

void Karen::warning() {
	std::cout
		<< "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free."
		<< " I’ve been coming here for years and you just started working here last month."
		<< '\n' << std::endl;
}

void Karen::error() {
	std::cout
		<< "[ ERROR ]\n"
		<< "This is unacceptable, I want to speak to the manager now."
		<< '\n' << std::endl;
}
