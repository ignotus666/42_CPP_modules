/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 08:06:52 by dhanlon           #+#    #+#             */
/*   Updated: 2026/03/03 12:24:59 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{
	std::string target = "";
	size_t pos = 0;
	size_t found;

	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		target += line.substr(pos, found - pos) + s2;
		pos = found + s1.length();
	}
	target += line.substr(pos);
	return (target);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return (1);
	}

	if (std::string (argv[2]).empty())
	{
		std::cout << "Error: s1 cannot be empty." << std::endl;
		return(1);
	}

	std::ifstream inputFile(argv[1]);
	
	if (!inputFile.is_open())
	{
		std::cout << "Error: cannot open file. Make sure it exists or that you have the right permissions." << std::endl;
		return(1);
	}
	
	std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());
	
	if (!outputFile.is_open())
	{
		std::cout << "Error: cannot create file." << std::endl;
		return(1);
	}

	std::string line;
	
	while (std::getline(inputFile, line))
	{
		outputFile << replace(line, argv[2], argv[3]) << "\n";
	}
	
	inputFile.close();
	outputFile.close();
	return(0);
}