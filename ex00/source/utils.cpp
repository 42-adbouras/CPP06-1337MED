/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 09:38:32 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/02 13:59:03 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "ScalarConverter.hpp"

bool	isDisplayable( char c )
{
	return (c >= 32 && c <= 126);
}

void	printImpossible( void )
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: Impossible" << std::endl;
	std::cout << "double: Impossible" << std::endl;
}

bool	charLiteral( str input )
{
	if (input.length() == 3 && input[0] == '\'' && input[2] == '\'') {
		char c = input[1];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
		return (true);
	}
	return (false);
}

void	printChar( double _db )
{
	if (_db < std::numeric_limits<char>::min() \
		|| _db > std::numeric_limits<char>::max()
		|| std::isnan(_db))
	{
		std::cout << "char: Impossible" << std::endl;
	} else if (!isDisplayable(static_cast<char>(_db))) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << static_cast<char>(_db) << "'" << std::endl;
	}
}

void	printInt( double _db )
{
	if (_db < std::numeric_limits<int>::min() \
		|| _db > std::numeric_limits<int>::max()
		|| std::isnan(_db))
	{
		std::cout << "int: Impossible" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(_db) << std::endl;
	}
}

bool	pseudoLiteral( str input )
{
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff"
		|| input == "-inf" || input == "-inff")
	{
		bool isFloat = input[input.length() - 2] == 'f';
		str base = isFloat ? input.substr(0, input.length() - 1) : input;
		base = (input == "nanf") ? "nan" : base;

		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << base << "f" << std::endl;
		std::cout << "double: " << base << std::endl;
		return (true);
	}
	return (false);
}

void	printFloatDouble( double _db )
{
	if (std::isnan(_db)) {
		std::cout << "float: Impossible" << std::endl;
		std::cout << "double: Impossible" << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(_db) << "f" << std::endl;
	std::cout << "double: " << _db << std::endl;
}
