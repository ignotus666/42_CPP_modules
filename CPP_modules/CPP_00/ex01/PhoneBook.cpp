/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:03:14 by dhanlon           #+#    #+#             */
/*   Updated: 2026/01/21 21:57:33 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	savedContacts = 0;
	lastSaved = 0;
}
PhoneBook::~PhoneBook()
{}

void PhoneBook::addContacts(std::string *fields)
{
	const std::string fieldName[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	std::string userInput;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << fieldName[i] << ": " << std::endl;
		std::getline(std::cin, userInput);
		fields[i] = userInput;

		if (fields[i].empty())
		{
			std::cout << "Error: " << fieldName[i] << " cannot be empty." << std::endl;
			return;
		}
		if (i == 3)
		{
			bool isNumber = true;
			for (size_t j = 0; j < fields[3].length(); ++j)
			{
				if (!isdigit(fields[3][j]))
				{
					isNumber = false;
					break;
				}
			}
			if (!isNumber)
			{
				std::cout << "Error: Phone number must contain only digits." << std::endl;
				return;
			}
		}
	}

	contacts[lastSaved].addContactField(fields);
	lastSaved = (lastSaved + 1) % 8;
	if (savedContacts < 8)
		savedContacts++;
	std::cout << "Contact added successfully!" << std::endl;
}

static std::string formatField(const std::string& field, size_t width)
{
	if (field.length() > width)
		return (field.substr(0, width - 1) + '.');
	else
		return (field);
}

void PhoneBook::searchContact()
{
	if (savedContacts < 1)
	{
		std::cout << "There are no contacts in your phone book!" << std::endl;
		return;
	}
	
	std::cout << "|" << std::setw(10) << formatField("Index", 10) << "|"
			  << std::setw(10) << formatField("First name", 10) << "|"
			  << std::setw(10) << formatField("Last name", 10) << "|"
			<< std::setw(10) << formatField("Nickname", 10) << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	for (int i = 0; i < savedContacts; i++)
	{
		int indexNum = i;
		std::cout << "|" << std::setw(10) << indexNum << "|"
				<< std::setw(10) << formatField(contacts[i].getFirstName(), 10) << "|"
				<< std::setw(10) << formatField(contacts[i].getLastName(), 10) << "|"
				<< std::setw(10) << formatField(contacts[i].getNickname(), 10) << "|" << std::endl;
	}
	
	std::string indexStr;
	std::cout << "Enter the index of the contact you want to see: " << std::endl;
	std::getline(std::cin, indexStr);

	bool valid = !indexStr.empty();
	for (size_t i = 0; i < indexStr.length(); ++i)
	{
		if (!isdigit(indexStr[i]))
			valid = false;
	}
	if (valid)
	{
		int idx;
		std::istringstream iss(indexStr);
		iss >> idx;
		if (idx >= 0 && idx <= savedContacts - 1)
		{
			contacts[idx].printContactData();
		}
		else
			std::cout << "Invalid index!" << std::endl;
	}
	else
		std::cout << "Invalid input!" << std::endl;
}
