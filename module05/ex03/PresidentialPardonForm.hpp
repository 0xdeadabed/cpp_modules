/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : PresidentialPardonForm
 * @created     : Tuesday Mar 15, 2022 16:15:40 CET
 */

#ifndef PRESIDENTIALPARDONFORM_HPP

#define PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(const std::string &t);

	PresidentialPardonForm(const PresidentialPardonForm &other);

	~PresidentialPardonForm();

	void executeAction() const;
};

#endif /* end of include guard PRESIDENTIALPARDONFORM_HPP */
