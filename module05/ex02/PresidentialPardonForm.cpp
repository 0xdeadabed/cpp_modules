/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : PresidentialPardonForm
 * @created     : Tuesday Mar 15, 2022 16:16:03 CET
 */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &t)
	: Form("Presedent", t, 25, 5) {
	std::cout << "[Presedent] created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[Presedent] destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: Form(other.getName(), other.getTarget(), other.getSignedGrade(), other.getExecuteGrade()){
	*this = other;
	std::cout << "[Presedent] copied from another object" << std::endl;
}

void PresidentialPardonForm::executeAction() const {
	std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
