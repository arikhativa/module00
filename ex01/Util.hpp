/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Util.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/06 10:10:09 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_HPP
# define UTIL_HPP

# include <sstream>
# include <iostream>
# include <string>
# include <iomanip>

const size_t		MAX_LEN = 10;

class Util
{
	private:
		Util();
		~Util();
	public:
		static std::ostream	&print_with_width(const std::string &s);
};

template <typename T>
std::string	to_string(T num)
{
	std::ostringstream ss;
	ss << num;
	return ss.str();
}

#endif
