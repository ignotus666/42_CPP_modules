/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:03:50 by dhanlon           #+#    #+#             */
/*   Updated: 2026/01/21 18:14:35 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"


int main(void)
{
	PhoneBook	phonebook;
	std::string user_input;
	
	while(true)
	{
		std::cout << "Phonebook usage: type ADD to add a new contact, SEARCH to find a contact or EXIT to quit the program\n";
		std::cout << "Enter your command: ";
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
		{
			std::string fields[5];
			phonebook.addContacts(fields);
		}
		else if (user_input == "SEARCH")
			phonebook.searchContact();
		else if (user_input == "EXIT")
			break;
		else
			std::cout << "\nInvalid input\n";
	}
}