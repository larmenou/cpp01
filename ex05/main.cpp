/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:21:08 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/08 11:10:21 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "~~~ INFO ~~~" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "~~~ DEBUG ~~~" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "~~~ WARNING ~~~" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "~~~ ERROR ~~~" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << "~~~ UNDEFINED ~~~" << std::endl;
	harl.complain("BURGER");
	
	return (0);
}
