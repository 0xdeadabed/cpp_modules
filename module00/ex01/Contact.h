//
// Created by penguin on 2/2/22.
//

#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact {
public:
	Contact();
	void index(int count);
	void    add_contact();
	void    count_contact();
	void    count_search();
	static void    create_table(std::string line);
	~Contact();

private:
	int in;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
};


#endif //CPP_MODULE_CONTACT_H
