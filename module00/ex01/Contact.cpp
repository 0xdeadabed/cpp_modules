//
// Created by penguin on 2/2/22.
//

#include "Contact.h"

Contact::Contact()
{
	this->in = 0;
}

void Contact::index(int count)
{
	in = count + 1;
}

void Contact::count_contact(){
	std::cout << "first name " << first_name << std::endl;
	std::cout << "last name " << last_name << std::endl;
	std::cout << "nickname " << nickname << std::endl;
	std::cout << "number " << phone_number << std::endl;
}

void Contact::add_contact()
{
	std::cout << "first name: ";
	std::cin >> first_name;
	std::cout << "last name: ";
	std::cin >> last_name;
	std::cout << "nickname: ";
	std::cin >> nickname;
	std::cout << "phone number: ";
	std::cin >> phone_number;
}

void Contact::count_search(){
	std::cout << "|";
	std::cout << std::setw(9) << in;
	std::cout << "|";
	Contact::create_table(first_name);
	Contact::create_table(last_name);
	Contact::create_table(nickname);
}

void Contact::create_table(std::string line){
	std::string tmp;
	if (line.length() > 10)
	{
		int i = 0;
		while (i < 9)
		{
			tmp += line[i];
			i++;
		}
		tmp += ".";
		std::cout << std::setw(18) << tmp;
	}
	else
		std::cout << std::setw(18) << line;
	std::cout << "|";
}

Contact::~Contact()
{}