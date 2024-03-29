/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:10 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/13 11:22:41 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private :
    std::string  name;

    public :
    Zombie(std::string z_name);
    ~Zombie();
    void	announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
