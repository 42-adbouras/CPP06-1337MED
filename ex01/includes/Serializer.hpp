/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:29:05 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/20 17:38:13 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"

class Serializer
{
private:
	Serializer( void );
	Serializer( const Serializer& right );
	~Serializer( void );
	Serializer&	operator=( const Serializer& right );
public:
	static uintptr_t	serialize( Data* ptr );
	static Data*		deserialize( uintptr_t raw );
};
