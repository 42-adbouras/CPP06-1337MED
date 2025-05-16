/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:28:01 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/15 16:38:08 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data	data = {"Jeff", 69, 'F'};

	std::cout << "______________  Data  ______________" << std::endl;
	data.printData();

	uintptr_t	address = Serializer::serialize(&data);

	Data*		newData = Serializer::deserialize(address);
	std::cout << "\n______________ newData ______________" << std::endl;
	newData->printData();
	return (0);
}
