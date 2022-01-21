/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:07:44 by hsabir            #+#    #+#             */
/*   Updated: 2022/01/21 14:35:58 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if  (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
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
