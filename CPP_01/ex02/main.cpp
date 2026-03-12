/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 08:12:50 by dhanlon           #+#    #+#             */
/*   Updated: 2026/02/26 08:34:13 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brainGreet = "HI THIS IS BRAIN";
	std::string *stringPTR = &brainGreet;
	std::string &stringREF = brainGreet;

	std::cout << &brainGreet << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << brainGreet << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}