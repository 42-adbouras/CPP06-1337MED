/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:24:40 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/02 11:10:57 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cmath>

typedef	std::string	str;

class	ScalarConverter
{
private:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter& right );
	~ScalarConverter( void );

	ScalarConverter& operator=( const ScalarConverter& right );

public:
	static void	convert( const str& param );
};
