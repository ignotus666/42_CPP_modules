/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:54:43 by dhanlon           #+#    #+#             */
/*   Updated: 2026/02/25 13:18:36 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string name;

	public:
		void announce(void);
		void setName(std::string name);
		Zombie();
		~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif