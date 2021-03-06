/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : RobotomyRequestForm
 * @created     : Tuesday Mar 15, 2022 11:56:05 CET
 */

#ifndef ROBOTOMYREQUESTFORM_HPP

#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(const std::string &t);

	RobotomyRequestForm(const RobotomyRequestForm &other);

	~RobotomyRequestForm();

	void executeAction() const;
};

#endif /* end of include guard ROBOTOMYREQUESTFORM_HPP */
