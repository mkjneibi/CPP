/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/04 15:21:10 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("ClapTrap1");
    ClapTrap b("ClapTrap2");
    ClapTrap c("ClapTrap3");

    std::cout << std::endl;

    a.attack("ClapTrap2");
    b.attack("ClapTrap3");
    c.attack("ClapTrap1");

    std::cout << std::endl;

    a.takeDamage(10);
    b.takeDamage(10);
    c.takeDamage(10);

    std::cout << std::endl;

    a.beRepaired(10);
    b.beRepaired(10);
    c.beRepaired(10);
    std::cout << std::endl;

    return (0);
}