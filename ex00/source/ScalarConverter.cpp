/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:26:05 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/21 10:23:51 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	isDisplayable( char c )
{
	return (c >= 32 && c <= 126);
}

static void	printImpossible( void )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

static bool	charLiteral( str input )
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

static void	printChar( double _db )
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

static void	printInt( double _db )
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

static bool	pseudoLiteral( str input )
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

static void	printFloatDouble( double _db )
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(_db) << "f" << std::endl;
	std::cout << "double: " << _db << std::endl;
}

void	ScalarConverter::convert( const str& param )
{
	str input = param;

	if (charLiteral(param))
		return ;
	if (pseudoLiteral(param))
		return ;
	size_t	dotPosition = input.find('.');
	if (dotPosition != str::npos) {
		if (dotPosition == input.length() - 1 \
			|| !std::isdigit(input[dotPosition + 1]) \
			|| !std::isdigit(input[dotPosition - 1]))
		{
			printImpossible(); return ;
		}
	}
	double _db;
	std::istringstream tempStream(input);

	if (input[input.length() - 1] == 'f')
		input = input.substr(0, input.length() - 1);

	tempStream.str(input);
	tempStream >> _db;

	if (tempStream.fail() || !tempStream.eof()) {
		printImpossible(); return ;
	}

	printChar(_db);
	printInt(_db);
	printFloatDouble(_db);
}
