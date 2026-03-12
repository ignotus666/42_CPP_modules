/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:54:39 by dhanlon           #+#    #+#             */
/*   Updated: 2026/02/25 11:47:47 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::Zombie(std::string zombieName)
{
	name = zombieName;
}

Zombie::~Zombie()
{
	std::cout << "Destroying " << name << std::endl;
}