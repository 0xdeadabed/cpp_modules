/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Bureaucrat
 * @created     : Thursday Mar 10, 2022 11:02:23 CET
 */

#include "Bureaucrat.hpp"

void checkThrow(int grade) {
	if (grade < maxgrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > mingrade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string &name, int grade) 
	: _name(name), _grade(grade) {
	checkThrow(grade);
	std::cout << "[Bureaucrat] created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name){
	*this = other;
	std::cout << "[Bureaucrat] copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(){ std::cout << "[Bureaucrat] destroyed" << std::endl; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	this->_grade = other._grade;
	std::cout << "[Bureaucrat] assignment operator" << std::endl;
	return *this;
}

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::increment(int n) {
	checkThrow(this->_grade + n);
	std::cout
		<< "Incremented "
		<< n
		<< std::endl;
	this->_grade += n;
}

void Bureaucrat::decrement(int n) {
	checkThrow(this->_grade - n);
	std::cout
		<< "Decremented "
		<< n
		<< std::endl;
	this->_grade -= n;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	std::cout << "Exception: grade too high\n";
	exit(-1);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	std::cout << "Exception: grade too low\n";
	exit(-1);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &instance) {
	os << instance.getName()
	   << ", bureaucrat grade "
	   << instance.getGrade();
	return os;
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

void Bureaucrat::executeForm(const Form &form) const {
	try {
		form.execute(*this);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
