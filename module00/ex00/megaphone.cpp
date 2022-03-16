/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hypn0x <wubbalubba@dub.dub>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:51:20 by hypn0x            #+#    #+#             */
/*   Updated: 2022/03/16 12:51:20 by hypn0x           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>


int	main(int argc, char *argv[])
{
	if  (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; ++i)
	{
		std::string str(argv[i]);
		for (int j = 0; j < str.length(); j++)
			std::cout << (char)std::toupper(str[j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
