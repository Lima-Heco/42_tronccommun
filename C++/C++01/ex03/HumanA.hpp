/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:24:29 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/06 20:24:31 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:

		const std::string	pr_name;
		Weapon*	pr_Weapone;

	public:

		HumanA(std::string thename, Weapon& theWeapon);
		~HumanA(void);

		void	attack(void) const;

};

#endif