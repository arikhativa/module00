/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:59 by yrabby            #+#    #+#             */
/*   Updated: 2023/02/05 17:53:19 by yrabby           ###   ########.fr       */
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

	while (EXIT != stt)
	{
		stt = _r.cli();
		if (ADD == stt)
			_pb.add();
		else if (SEARCH == stt)
			_pb.search();
	}
}
