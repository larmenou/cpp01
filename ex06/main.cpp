/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:21:08 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/11 09:54:55 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments, one only." << std:: endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
