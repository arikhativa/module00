/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/06 10:10:14 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Util.hpp"

// TODO prevent constructor

Util::Util()
{
}

Util::~Util()
{
}

std::ostream	&Util::print_with_width(const std::string &s)
{
	if (s.length() > MAX_LEN)
		std::cout << s.substr(0, MAX_LEN - 1) << '.';
	else
		std::cout << std::setw(MAX_LEN) << s;
	return std::cout;
}
