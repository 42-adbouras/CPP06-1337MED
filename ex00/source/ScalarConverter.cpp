/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:26:05 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/21 09:57:25 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"

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

	size_t	lastChar = input.length() - 1;
	if (input[lastChar] == 'f')
		input = input.substr(0, lastChar);

	tempStream.str(input);
	tempStream >> _db;

	if (tempStream.fail() || !tempStream.eof()) {
		printImpossible(); return ;
	}

	printChar(_db);
	printInt(_db);
	printFloatDouble(_db);
}
