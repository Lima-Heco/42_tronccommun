/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:24:52 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/06 20:24:55 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	Weaponetype)
{
	this->pr_Type = Weaponetype;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string	Weapon::getType(void) const
{
	return (this->pr_Type);
}

void	Weapon::setType(std::string theType)
{
	this->pr_Type = theType;
	return;
}