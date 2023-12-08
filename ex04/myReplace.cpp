/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myReplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:46:32 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/07 14:14:24 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int init(const std::string to_c, const std::string r, char* filename,
		std::ifstream& ifs, std::ofstream& ofs)
{
	std::string out;
	
	if (to_c.empty() || r.empty())
	{
		std::cout << "Enter valid string." << std::endl;
		return (0);
	}
	
	ifs.open(filename);
	if (!ifs.is_open())
	{
		std::cerr << "Error while opening infile." << std::endl;
		return (0);
	}
	out = filename;
	out.append(".replace");
	ofs.open(out.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error while opening outfile." << std::endl;
		ifs.close();
		return (0);
	}
	return (1);
}

void myReplace(std::string& line, const std::string to_c, const std::string r)
{
	std::size_t pos = 0;
	
	pos = line.find(to_c, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, to_c.length());
		line.insert(pos, r);
		pos += r.length();
		pos = line.find(to_c, pos);
	}
}
