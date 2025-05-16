/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:31:31 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/15 16:33:48 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

void	Data::printData( void ) {
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Age: " << this->age << std::endl;
	std::cout << "Grade: " << this->grade << std::endl;
}
