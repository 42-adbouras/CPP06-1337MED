/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:28:01 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/02 10:58:48 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cstddef>

int	main( void )
{
	Data	data("Jeff", 69, 'F');

	std::cout << "______________  Data  ______________" << std::endl;
	data.printData();

	uintptr_t	address = Serializer::serialize(&data);

	Data*		recData = Serializer::deserialize(address);
	std::cout << "\n__________ Recovered Data __________" << std::endl;
	recData->printData();
	return (0);
}
