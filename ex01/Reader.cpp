/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reader.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/04/20 13:02:03 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reader.hpp"

Reader::Reader() : _ADD_STR("ADD"),
					_SEARCH_STR("SEARCH"),
					_EXIT_STR("EXIT"),
					_prompt("Ready to add, search or exit?")
{
}

Reader::~Reader()
{
}

appStatus Reader::cli(void) const
{
	std::string input;

	std::cout << _prompt << std::endl;
	std::getline(std::cin, input);
	if (_ADD_STR == input)
		return ADD;
	else if (_SEARCH_STR == input)
		return SEARCH;
	else if (_EXIT_STR == input)
		return EXIT;
	return ERROR;
}

std::string Reader::arg(std::string arg_name)
{
	std::string input = "";

	std::cout << arg_name << ":" << std::endl;
	std::getline(std::cin, input);
	return input;
}
