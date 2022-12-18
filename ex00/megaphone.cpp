/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:57:00 by yrabby            #+#    #+#             */
/*   Updated: 2022/12/18 13:57:02 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define NO_INPUT_MSG	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"
#define SUCCESS			0
#define SPACE_CHAR		' '

static void	print_str_upper(const char *str)
{
	std::string s(str);

	for (std::string::iterator it = s.begin() ; it != s.end(); ++it)
		std::cout << (char)std::toupper(*it);
}

int	main(int ac, char **av)
{
	if (1 == ac)
		std::cout << NO_INPUT_MSG;
	else
		for (int i = 1; av[i]; ++i)
			print_str_upper(av[i]);
	std::cout << std::endl;
	return SUCCESS;
}
