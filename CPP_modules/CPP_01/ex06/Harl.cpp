/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 08:06:42 by dhanlon           #+#    #+#             */
/*   Updated: 2026/03/04 10:28:33 by dhanlon          ###   ########.fr       */
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

void Harl::filter(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int	i = 0;

	while (levels[i] != level && i < 4)
		i++;

	switch (i)
	{
		case 0:
			complain("DEBUG");
			// fall through
		case 1:
			complain("INFO");
			// fall through
		case 2:
			complain("WARNING");
			// fall through
		case 3:
			complain("ERROR");
			break;
		default:
			complain("RANDOM WHINING");
	}
}
