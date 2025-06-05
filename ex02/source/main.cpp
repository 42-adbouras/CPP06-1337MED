/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:32:26 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/02 10:58:02 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main( void )
{
	std::cout << "::::::    Random Generated Derived Class    ::::::" << std::endl;
	Base	*derived = generate();

	identify(derived);
	identify(*derived);

	std::cout << "\n::::::           Passing Base Class         ::::::" << std::endl;
	Base	base;

	identify(&base);
	identify(base);

	delete derived;
	return (0);
}
