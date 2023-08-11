/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 02:55:13 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/08 19:25:40 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::complain(std::string level)
{
void		(Harl::*ptr_complain[4])(void) = {&Harl::pr_debug, &Harl::pr_info, &Harl::pr_warning, &Harl::pr_error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}

void	Harl::pr_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	return;
}

void	Harl::pr_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return;
}

void	Harl::pr_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::pr_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return;
}