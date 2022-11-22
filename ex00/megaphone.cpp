/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:41:17 by yoav              #+#    #+#             */
/*   Updated: 2022/11/22 15:38:16 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define NO_INPUT_MSG	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"
#define SUCCESS			0
#define SPACE_CHAR		' '

static void	print_str_upper(const char *str)
{
	std::string s(str);

	for (auto it = s.begin() ; it != s.end(); ++it)
		std::cout << (char)std::toupper(*it);
}

int	main(int ac, char **av)
{
	if (1 == ac)
		std::cout << NO_INPUT_MSG;
	else
		for (auto i = 1; av[i]; ++i)
			print_str_upper(av[i]);
	std::cout << std::endl;
	return SUCCESS;
}
