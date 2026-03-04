/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:54:31 by dhanlon           #+#    #+#             */
/*   Updated: 2026/02/26 08:09:14 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *zombies = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}