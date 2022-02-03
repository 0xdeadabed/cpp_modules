//
// Created by penguin on 2/2/22.
//

#include "PhoneBook.h"

int main()
{
	Contact contact;
	PhoneBook phone;
	std::string command;
	
	std::cout << "Welcome to phonebooks" << std::endl;
	std::cout << "Please make a choose: ADD; SEARCH, EXIT" << std::endl;
	while (1) {
		std::cout << "phonebook ~ ";
		std::cin >> command;
		if (std::cin.eof())
			break;
		if (command == "ADD")
			phone.add_to_phonebook();
		else if (command == "SEARCH")
			phone.search_contact();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "phonebook: invalid command" << std::endl;
	}
	return (0);
}