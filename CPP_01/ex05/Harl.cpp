/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 08:06:42 by dhanlon           #+#    #+#             */
/*   Updated: 2026/03/04 09:33:15 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "DEBUG: insert DEBUG message here" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO: insert INFO message here" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: insert WARNING message here" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: insert ERROR message here" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*funcList[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcList[i])();
			return;
		}
	}
		std::cout << "Stop whining and enter a valid level" << std::endl;
}