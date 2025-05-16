/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:32:20 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/16 17:04:05 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// Base::Base( void ) {
// 	std::cout << "[Base class constructed]" << std::endl;
// }

Base::~Base( void ) {
	std::cout << "[Base class destructed]" << std::endl;
}

Base*	generate(void) {
	srand(static_cast<unsigned int>(time(NULL)));
	int temp = (rand() % 3) + 1;
	std::cout << "rand " << temp << std::endl;
	if (temp == 1)
		return (new A);
	else if (temp == 2)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	if (dynamic_cast<A*>(p))
		std::cout << "Identified a class A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified a class B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified a class C." << std::endl;
	else
		std::cout << "[Unknown type]" << std::endl;
}


void	identify(Base& p) {
	(void) p;
	std::cout << "here" << std::endl;
	
}