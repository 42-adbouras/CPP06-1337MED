/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:31:05 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/20 17:39:37 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) { return ; }

Serializer::Serializer( const Serializer& right ) {
	*this = right;
}

Serializer::~Serializer( void ) { return ; }

Serializer&	Serializer::operator=( const Serializer& right ) {
	static_cast<void>(right);
	return (*this);
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast<Data*>(raw));
}
