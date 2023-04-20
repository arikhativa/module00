/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reader.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/04/20 12:46:27 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_HPP
# define READER_HPP

# include <iostream>

# include "Contact.hpp"

enum appStatus {
	ERROR = -1,
	CON,
	ADD,
	SEARCH,
	EXIT
};

class Reader
{
	private:
		const std::string _ADD_STR;
		const std::string _SEARCH_STR;
		const std::string _EXIT_STR;
		const std::string _prompt;
	public:
		Reader();
		~Reader();
		appStatus cli(void) const;
		static std::string arg(std::string arg_name);
};

#endif
