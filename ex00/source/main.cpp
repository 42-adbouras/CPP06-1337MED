/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:25:59 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/18 09:12:16 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

int main(int ac, char **av)
{
	long input;
	if (ac != 2) {
		std::cerr << "Usage: ./program <literal>" << std::endl;
		return 1;
	}
	input = std::atoi(av[1]);
	std::cout << "char: " << static_cast<char>(input) << std::endl;
	std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << static_cast<float>(input) << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
	return (0);
}
