/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:54:39 by dhanlon           #+#    #+#             */
/*   Updated: 2026/02/26 07:57:25 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << i + 1;
		std::string uniqueName = name + oss.str();
		horde[i].setName(uniqueName);
	}
	return(horde);
}