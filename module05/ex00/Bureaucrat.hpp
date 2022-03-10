/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Bureaucrat
 * @created     : Thursday Mar 10, 2022 11:02:18 CET
 */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#define maxgrade 1
#define mingrade 150

#include <iostream>

class Bureaucrat {
	private:
        Bureaucrat ();
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat ();

		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string &getName() const;
		int getGrade() const;

		void increment(int n);
		void decrement(int n);

		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &instance);

#endif /* end of include guard BUREAUCRAT_HPP */

