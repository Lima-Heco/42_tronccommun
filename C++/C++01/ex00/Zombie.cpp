/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:48:26 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/02 00:57:58 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->pr_name = name;
	return;
}

Zombie::~Zombie( void )
{
	return;
}

void	Zombie::announce( void )
{
	std::cout << this->pr_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}