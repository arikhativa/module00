/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/05 18:01:28 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define LIST_MAX_SIZE	8

// TODO
# include <iostream>

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_list[LIST_MAX_SIZE];
		int _get_contact_index(void);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
};	

#endif
