/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:54:39 by dhanlon           #+#    #+#             */
/*   Updated: 2026/02/26 08:04:38 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(std::string zombieName)
{
	name = zombieName;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << ": Oh sh*t... SPLAT!" << std::endl;
}