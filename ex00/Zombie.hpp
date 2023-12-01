/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:51:47 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/01 11:36:55 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void) const;

	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );
