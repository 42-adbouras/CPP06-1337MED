/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:31:31 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/02 13:27:56 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

void	Data::printData( void )
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Age: " << this->_age << std::endl;
	std::cout << "Grade: " << this->_grade << std::endl;
}
