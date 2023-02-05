/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:01:02 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/05 21:13:24 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone = "";
	_secret = "";
}

Contact::~Contact()
{

}
// TODO
// A saved contact can’t have empty fields.
void Contact::init()
{
	std::cout << "Enter Contact Details" << std::endl;

	_first_name = Reader::arg("first name");
	_last_name = Reader::arg("last name");
	_nickname = Reader::arg("nickname");
	_phone = Reader::arg("phone number");
	_secret = Reader::arg("a secret");
	
	std::cout << "done! contact have been added :)" << std::endl;
}

void	long_input_print(std::string input)
{
	if (input.length() > 10)
		std::cout << input.substr(0, 9) << '.';
	else
	{
		std::cout << std::setw(10);
		std::cout << input;
	}
}

// TODO check why tab is borken with ADD

void	Contact::simple_print(int i)
{
	std::cout << std::setiosflags(std::ios_base::right);


	std::cout << std::setw(10);
	std::cout << i;
	std::cout << SPACER;

	long_input_print(_first_name);
	std::cout << SPACER;

	long_input_print(_last_name);
	std::cout << SPACER;

	long_input_print(_nickname);
	std::cout << std::endl;
	
	std::cout << std::resetiosflags(std::ios_base::right);
}

bool	Contact::empty()
{
	return (_first_name == "");
}
