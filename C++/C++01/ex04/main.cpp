/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:36:37 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/08 02:38:53 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string str)
{
	int	i;
	int	sit;
	std::ofstream	file;

	file.open((std::string(argv[1]) + ".replace").c_str());
	if (file.fail())
		return (1);
	i = 0;
	while (i < (int)str.size())
	{
		sit = str.find(argv[2], i);
		if (sit != -1 && sit == i)
		{
			file << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			file << str[i];
		i++;
	}
	file.close();
	return 0;
}

int	main(int argc, char **argv)
{
	char	c;
	std::string	str;
	std::ifstream	file;

	if (argc != 4)
	{
		std::cout << "mauvais nombres de parametres" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (file.fail())
	{
		std::cout << "fichier impossible a trouver ou a ouvrir" << std::endl;
		return (1);
	}
	while (!file.eof() && file >> std::noskipws >> c)
		str += c;
	file.close();
	return (replace(argv, str));
}