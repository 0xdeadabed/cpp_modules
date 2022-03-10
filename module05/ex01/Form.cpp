/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Form
 * @created     : Thursday Mar 10, 2022 16:36:45 CET
 */

#include "Form.hpp"

void checkGrade(int grade) {
	if (grade < maxgrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > mingrade)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form()
	: _signed(false),_name("form"),_signGrade(1),_executeGrade(1) {}

Form::Form(const std::string &name, int signGrade, int executeGrade)
	: _signed(false),
	_name(name),
	_signGrade(signGrade),
	_executeGrade(executeGrade) {
		checkGrade(signGrade);
		checkGrade(executeGrade);
		std::cout << "[Form] created" << std::endl;
	}

Form::Form(const Form &other) :
	_signed(other._signed),
	_name(other._name),
	_signGrade(other._signGrade),
	_executeGrade(other._executeGrade) {
		std::cout << "[Form] copy constructor" << std::endl;
	}

Form::~Form() { std::cout << "[Form] deconstructor" << std::endl; }

Form &Form::operator=(const Form &other) {
	std::cout << "[Form] assignment operator" << std::endl;
	(void)other;
	return *this;
}

const std::string &Form::getName() const {
	return this->_name;
}

bool Form::getSigned() const {
	return this->_signed;
}

int Form::getSignedGrade() const {
	return this->_signGrade;
}

int Form::getExecuteGrade() const {
	return this->_executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_signGrade) {
		this->_signed = true;
		std::cout
			<< bureaucrat.getName()
			<< " signed "
			<< this->_name
			<< std::endl;
	} else {
		std::cout 
			<< bureaucrat.getName()
			<< " couldn't sign "
			<< this->_name
			<< std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return "* GradeTooHighException *";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "* GradeTooLowException *";
}

std::ostream &operator<<(std::ostream &os, const Form &instance) {
	os << "[" << instance.getName() << "]"
		<< ", status: " << (instance.getSigned() ? "signed" : "not signed")
		<< ", sign grade: " << instance.getSignedGrade()
		<< ", execute grade: " << instance.getSignedGrade()
		<< std::endl;
	return os;
}
