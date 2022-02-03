//
// Created by penguin on 2/2/22.
//

#ifndef CPP_MODULE_PHONEBOOK_H
#define CPP_MODULE_PHONEBOOK_H

#include "Contact.h"

class PhoneBook {
private:
	Contact	contact[8];
	int count;
	int last_contact;
public:
	PhoneBook();
	void add_to_phonebook();
	void add_count();
	void search_contact();
	~PhoneBook();
};


#endif //CPP_MODULE_PHONEBOOK_H
