/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/06 10:13:13 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define LIST_MAX_SIZE	8

// TODO
# include <iostream>

# include "Util.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _list[LIST_MAX_SIZE];
		int		_last_index;
		int		_get_contact_index(void);
		void	_print_all() const;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void) const;
};	

#endif
