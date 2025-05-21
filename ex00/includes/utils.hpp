/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 09:37:48 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/21 09:42:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScalarConverter.hpp"

bool	isDisplayable( char c );
void	printImpossible( void );
bool	charLiteral( str input );
void	printChar( double _db );
void	printInt( double _db );
bool	pseudoLiteral( str input );
void	printFloatDouble( double _db );
