/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:11 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/12 23:32:24 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string z_name)
{
	this->name = z_name;
	std::cout << "Zombie object " << this->name << " is created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie object " << this->name << " is destroyed" << std::endl;
}

//indicating that the Zombie object is making a sound.
void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ" << std::endl;
}