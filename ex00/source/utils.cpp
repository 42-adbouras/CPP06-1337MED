/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 09:38:32 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/21 09:39:50 by adbouras         ###   ########.fr       */
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
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

bool	charLiteral( str input )
{
	if (input.length() == 1 && input[0] == '\'' && input[2] == '\'') {
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
		|| _db > std::numeric_limits<char>::max() \
		|| std::isnan(_db))
	{
		std::cout << "char: impossible" << std::endl;
	} else if (!isDisplayable(static_cast<char>(_db))) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << static_cast<char>(_db) << "'" << std::endl;
	}
}

void	printInt( double _db )
{
	if (_db < std::numeric_limits<int>::min() \
		|| _db > std::numeric_limits<int>::max() \
		|| std::isnan(_db))
	{
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(_db) << std::endl;
	}
}

bool	pseudoLiteral( str input )
{
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff"
		|| input == "-inf" || input == "-inff")
	{
		bool isFloat = input[input.length() - 1] == 'f';
		str base = isFloat ? input.substr(0, input.length() - 1) : input;

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << base << "f" << std::endl;
		std::cout << "double: " << base << std::endl;
		return (true);
	}
	return (false);
}

void	printFloatDouble( double _db )
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(_db) << "f" << std::endl;
	std::cout << "double: " << _db << std::endl;
}
