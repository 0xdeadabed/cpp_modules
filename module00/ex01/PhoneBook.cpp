//
// Created by penguin on 2/2/22.
//

#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	this->count = 0;
	this->last_contact = 0;
}

void PhoneBook::add_to_phonebook()
{
	if(count == 8)
		count = 0;
	contact[count].add_contact();
	contact[count].index(count);
	count++;
	if(last_contact != 8)
		last_contact++;
}

void PhoneBook::add_count(){
	contact[count - 1].count_contact();
}

void PhoneBook::search_contact(){
	int k;
	std::string i;
	
	std::cout << "|  index  |first_name|last_name|nickname|" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	
	for (int i = 0; i < last_contact; i++){
		contact[i].count_search();
		std::cout << std::endl;
		
	}
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "choose index: ";
	std::cin >> i;
	if (i != "1" && i != "2" && i != "3" && i != "4"
		&& i != "5" && i != "6" && i != "7" && i != "8" && i != "9")
	{
		std::cout << "Error: wrong index" << std::endl;
		return ;
	}
	k = std::atoi(i.c_str());
	if (k > last_contact)
	{
		std::cout << "Error: wrong index" << std::endl;
		return ;
	}
	contact[k - 1].count_contact();
}


PhoneBook::~PhoneBook(){};