/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:24:59 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/06 20:25:01 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:

		std::string	pr_Type;

	public:

		Weapon(std::string	Weaponetype);
		~Weapon(void);

		std::string	getType(void) const;

		void	setType(std::string theType);

};

#endif