/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ShrubberyCreationForm
 * @created     : Friday Mar 11, 2022 11:52:26 CET
 */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("[ShrubberyCreationForm] created", "void", 146, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] destroyed" << std::endl;
}

