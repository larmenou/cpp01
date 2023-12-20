/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:36:05 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/20 11:43:25 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	if (this->_weapon.getType().length() == 0)
		this->_weapon.setType("default weapon");
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}