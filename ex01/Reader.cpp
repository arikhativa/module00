/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reader.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/06 09:57:21 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reader.hpp"

Reader::Reader() : _ADD_STR("ADD"),
					_SEARCH_STR("SEARCH"),
					_EXIT_STR("EXIT")
{
}

Reader::~Reader()
{
}

appStatus Reader::cli(void)
{
	std::string input;

	std::cin >> input;
	if (_ADD_STR == input)
		return (ADD);
	else if (_SEARCH_STR == input)
		return (SEARCH);
	else if (_EXIT_STR == input)
		return (EXIT);
	return (ERROR);
}

std::string Reader::arg(std::string arg_name)
{
	std::string input = "";

	std::cout << arg_name << ":" << std::endl;
	std::cin >> input;
	return input;
}
