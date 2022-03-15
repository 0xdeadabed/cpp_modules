/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : RobotomyRequestForm
 * @created     : Tuesday Mar 15, 2022 11:59:14 CET
 */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &t)
	: Form("Robotomy", t, 72, 45) {
	std::cout << "[Robotomy] created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other.getName(), other.getTarget(), other.getSignedGrade(), other.getExecuteGrade()) {
	*this = other;
	std::cout << "[Robotomy] copied from another object" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[Robotomy] destroyed" << std::endl;
}

void RobotomyRequestForm::executeAction() const {
	std::srand(std::time(NULL));
	std::cout << "* some drilling noises *" << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
	}
}
