/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:06:24 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/20 10:40:20 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Default test : " << std::endl;
	std::cout << "Memory address:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Value:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "# # # # # # # # # # # # # #" << std::endl;
	std::cout << std::endl;

	str = "BRAIN 2";
	std::cout << "Change str : " << std::endl;
	std::cout << "Memory address 2:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Value 2:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "# # # # # # # # # # # # # #" << std::endl;
	std::cout << std::endl;

	*stringPTR = "BRAIN 3";
	std::cout << "Change *stringPTR : " << std::endl;
	std::cout << "Memory address 3:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Value 3:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "# # # # # # # # # # # # # #" << std::endl;
	std::cout << std::endl;

	stringREF = "BRAIN 4";
	std::cout << "Change stringREF : " << std::endl;
	std::cout << "Memory address 4:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Value 4:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
