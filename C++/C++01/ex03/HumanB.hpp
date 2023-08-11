/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:24:12 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/06 20:24:17 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:

		const std::string	pr_name;
		Weapon	*pr_Weapone;

	public:

		HumanB(std::string thename);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon& theWeapon);

};

#endif