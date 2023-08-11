/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:24:36 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/06 20:24:38 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
# include "Weapon.hpp"

HumanB::HumanB(std::string thename) : pr_name(thename)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack(void) const
{
	std::cout << this->pr_name << " attacks With their " << this->pr_Weapone->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon& theWeapon)
{
	this->pr_Weapone = &theWeapon;
	return;
}