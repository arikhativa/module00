/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:01:02 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/09 14:59:49 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _first_name(""),
						_last_name(""),
						_nickname(""),
						_phone(""),
						_secret("")
{
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

// TODO check why tab is borken with ADD
void	Contact::simple_print(int i) const
{
	std::string index = to_string<int>(i);
	std::cout << std::setiosflags(std::ios_base::right);
	Util::print_with_width(index) << SPACER;
	Util::print_with_width(_first_name) << SPACER;
	Util::print_with_width(_last_name) << SPACER;
	Util::print_with_width(_nickname) << std::endl;
	std::cout << std::resetiosflags(std::ios_base::right);
}

void	Contact::print() const
{
	std::cout << _first_name << std::endl
		<< _last_name << std::endl
		<< _nickname << std::endl
		<< _phone << std::endl
		<< _secret << std::endl;
}

bool	Contact::empty() const
{
	return (_first_name == "");
}
