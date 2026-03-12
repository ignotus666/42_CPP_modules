/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:01:42 by dhanlon           #+#    #+#             */
/*   Updated: 2026/01/21 11:39:40 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}

void	Contact::addContactField(std::string *fields)
{
	firstName		= fields[0];
	lastName		= fields[1];
	nickname		= fields[2];
	phoneNumber		= fields[3];
	darkestSecret	= fields[4];
}


void	Contact::printContactData()
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}