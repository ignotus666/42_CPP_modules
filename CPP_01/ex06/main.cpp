/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 08:06:08 by dhanlon           #+#    #+#             */
/*   Updated: 2026/03/04 10:29:21 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl user;

	if (argc != 2)
	{
		std::cout << "You need to pass an argument!" << std::endl;
		return (1);
	}

	user.filter(argv[1]);
	return (0);
}
