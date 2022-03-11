/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Form
 * @created     : Thursday Mar 10, 2022 14:34:24 CET
 */

#ifndef FORM_HPP

#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        Form ();
		bool _signed;
		const std::string _target;
		const std::string _name;
		const int _signGrade;
		const int _executeGrade;
    public:
		Form(const std::string &name, const std::string &target, int signGrade,int executeGrade);
		Form(const Form &form);
        ~Form ();

		Form &operator=(const Form &other);

		const std::string &getName() const;
		bool getSigned() const;
		void beSigned(const Bureaucrat &bureaucrat);
		int getSignedGrade() const;
		int getExecuteGrade() const;

		// Nested classes
		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &instance);

#endif /* end of include guard FORM_HPP */

