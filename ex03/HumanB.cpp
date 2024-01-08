/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:36:10 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/08 09:45:00 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB()
{
	this->_name = "default";
	this->_weapon = NULL;
	return ;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
	return ;
}

void HumanB::attack()
{
	if (_weapon->getType().length() == 0)
		std::cout << this->_name << " attacks with their head" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	return ;
}
