/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 08:06:08 by dhanlon           #+#    #+#             */
/*   Updated: 2026/03/04 09:20:33 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl user;

	user.complain("DEBUG");
	user.complain("INFO");
	user.complain("WARNING");
	user.complain("ERROR");

	//Non-valid level:
	user.complain("WHINING");
}