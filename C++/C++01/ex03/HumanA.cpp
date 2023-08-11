/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:24:23 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/06 20:24:25 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
# include "Weapon.hpp"

HumanA::HumanA(std::string thename, Weapon& theWeapon) : pr_name(thename), pr_Weapone(&theWeapon)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void) const
{
	std::cout << this->pr_name << " attacks With their " << this->pr_Weapone->getType() << std::endl;
	return;
}
