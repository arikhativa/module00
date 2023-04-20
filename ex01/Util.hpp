/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Util.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/04/20 13:01:27 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_HPP
# define UTIL_HPP

# include <sstream>
# include <iostream>
# include <string>
# include <iomanip>

class Util
{
	private:
		Util();
		~Util();
		static const size_t	_MAX_LEN = 10;
	public:
		static std::ostream	&print_with_width(const std::string &s);
};

#endif
