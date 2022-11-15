/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:41:17 by yoav              #+#    #+#             */
/*   Updated: 2022/11/15 13:15:37 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define NO_INPUT_MSG	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"
#define SUCCESS			0

int	main(int ac, char **av)
{
	if (1 == ac)
	{
		std::cout << NO_INPUT_MSG << std::endl;
		return SUCCESS;
	}
	(void)ac;
	(void)av;
	return SUCCESS;
}
