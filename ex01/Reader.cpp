/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reader.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/04/24 13:29:48 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reader.hpp"

Reader::Reader() : _ADD_STR("ADD"),
					_SEARCH_STR("SEARCH"),
					_EXIT_STR("EXIT"),
					_prompt("Ready to ADD, SEARCH or EXIT?")
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
	if (std::cin.eof())
	{
		std::cerr <<  "reached EOF. Exiting the program" << std::endl;
		return EXIT;
	}
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
	if (std::cin.eof())
	{
		std::cerr <<  "reached EOF. Exiting the program" << std::endl;
		exit(-1);
	}
	while (input.empty() || !std::cin.good())
	{
		std::cerr << "invalid (empty) input" << std::endl;
		std::cin.clear();
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cerr <<  "reached EOF. Exiting the program" << std::endl;
			exit(-1);
		}
	}
	return input;
}
