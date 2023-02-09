/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/09 14:58:43 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

# include "Reader.hpp"
# include "Util.hpp"

const std::string	SPACER = " | ";

// TODO
// check if publick should be before private
// i think u need to add namepace

class Contact
{
	public:
		Contact();
		~Contact();
		void init(void);
		void simple_print(int i) const;
		void print() const;
		bool empty(void) const;
	private:
		std::string	_first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
};

#endif
