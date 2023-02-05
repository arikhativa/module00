/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:01:02 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/05 18:02:48 by yrabby           ###   ########.fr       */
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
	std::cout << "first_name:" << std::endl;
	std::cin >> _first_name;
	std::cout << "last_name:" << std::endl;
	std::cin >> _last_name;
	std::cout << "nickname:" << std::endl;
	std::cin >> _nickname;
	std::cout << "phone:" << std::endl;
	std::cin >> _phone;
	std::cout << "secret:" << std::endl;
	std::cin >> _secret;
	std::cout << "done! contact have been added :)" << std::endl;
}