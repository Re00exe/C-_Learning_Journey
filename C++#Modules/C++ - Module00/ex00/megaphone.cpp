/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midfath <midfath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:01:42 by midfath           #+#    #+#             */
/*   Updated: 2022/12/13 18:50:37 by midfath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int ac, char **av)
{
	std::string ar;

	if (ac >= 2)
	{
		for (int j = 1; j < ac; j++)
		{
			for(size_t i = 0; i < strlen(av[j]); i++)
				ar += ::toupper(av[j][i]);
		}
		std::cout << ar << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}