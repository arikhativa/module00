/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/04/20 13:01:17 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Util.hpp"

Util::Util()
{
}

Util::~Util()
{
}

std::ostream	&Util::print_with_width(const std::string &s)
{
	if (s.length() > _MAX_LEN)
		std::cout << s.substr(0, _MAX_LEN - 1) << '.';
	else
		std::cout << std::setw(_MAX_LEN) << s;
	return std::cout;
}
