/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/04/20 12:46:30 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "App.hpp"

App::App()
{
}

App::~App()
{
}

void App::run(void)
{
	appStatus stt;

	stt = CON;
	while (EXIT != stt)
	{
		stt = _r.cli();
		if (ADD == stt)
			_pb.add();
		else if (SEARCH == stt)
			_pb.search();
	}
}
