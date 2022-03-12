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

void Bureaucrat::increment(){
	checkThrow(this->_grade - 1);
	std::cout << "Default increment -1" << std::endl;
	--this->_grade;
}

void Bureaucrat::increment(int n) {
	checkThrow(this->_grade - n);
	std::cout
		<< "Increment -"
		<< n
		<< std::endl;
	this->_grade -= n;
}

void Bureaucrat::decrement() {
	checkThrow(this->_grade + 1);
	std::cout << "Default decrement +1" << std::endl;
	++this->_grade;
}

void Bureaucrat::decrement(int n) {
	checkThrow(this->_grade + n);
	std::cout
		<< "Decrement +"
		<< n
		<< std::endl;
	this->_grade += n;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception: grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception: grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &instance) {
	os << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return os;
}
