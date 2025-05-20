/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:25:59 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/19 17:07:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <sstream>

int main(int ac, char **av)
{
	(void) ac;
	// (void) av;
	// if (ac != 2) {
	// 	std::cerr << "Usage: ./convert <literal>" << std::endl;
	// 	return 1;
	// }
	// ScalarConverter::convert(std::string(av[1]));
	std::istringstream	iss(av[1]);
	str	token;
	while (iss >> token) {
		std::cout << "token: " << token << std::endl;
		std::istringstream	tokenIss(token);
		int	_int;
		if (tokenIss >> _int && tokenIss.eof()) {
			std::cout << "Int: " << _int << ".";
		}
	}
	std::cout << std::endl;
	return (0);
}
