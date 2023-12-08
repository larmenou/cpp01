/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:38:51 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/07 14:08:33 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	std::string line;
	std::string to_c;
	std::string r;
	std::ifstream ifs;
	std::ofstream ofs;

	if (ac != 4)
	{
		std::cerr << "sed working : ./sed file s1 s2." << std::endl;
		return (1);
	}
	else
	{
		to_c = av[2];
		r = av[3];
		if (!init(to_c, r, av[1], ifs, ofs))
			return (1);
		while (getline(ifs, line))
		{
			myReplace(line, to_c, r);
			ofs << line << std::endl;
		}	
		ifs.close();
		ofs.close();
	}
	return (0);
}
