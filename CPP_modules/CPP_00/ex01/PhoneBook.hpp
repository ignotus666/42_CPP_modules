/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:03:27 by dhanlon           #+#    #+#             */
/*   Updated: 2026/01/21 21:59:12 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		savedContacts;
		int		lastSaved;

	public:
		PhoneBook();
		~PhoneBook();
		
		void addContacts(std::string *fields);
		void searchContact();
};

#endif