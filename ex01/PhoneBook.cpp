/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/06 10:13:08 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _last_index(7)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(void)
{
	int	i = _get_contact_index();

	_list[i].init();
}
void	PhoneBook::search(void) const
{
	_print_all();
}

int	PhoneBook::_get_contact_index(void)
{
	++_last_index;
	_last_index %= LIST_MAX_SIZE;
	return _last_index;
}

void	PhoneBook::_print_all() const
{
	std::cout << std::setiosflags(std::ios_base::left);
	Util::print_with_width("Index") << SPACER;
	Util::print_with_width("First Name") << SPACER;
	Util::print_with_width("Last Name") << SPACER;
	Util::print_with_width("Nickname") << std::endl;
	std::cout << std::resetiosflags(std::ios_base::left);
	for (int i = 0; i < LIST_MAX_SIZE; ++i)
	{
		if (!_list[i].empty())
			_list[i].simple_print(i);
	}
}
