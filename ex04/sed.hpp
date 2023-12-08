/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:45:42 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/07 14:30:37 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>
# include <iostream>
# include <fstream>

int		init(const std::string to_c, const std::string r, char* filename,
			std::ifstream& ifs, std::ofstream& ofs);
void	myReplace(std::string& line, const std::string to_c, const std::string r);

#endif