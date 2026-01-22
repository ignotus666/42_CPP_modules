/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 08:01:02 by dhanlon           #+#    #+#             */
/*   Updated: 2025/12/13 09:44:29 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j = 1;

	if (argc > 1)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				std::cout << (char)toupper(argv[j][i]);
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
