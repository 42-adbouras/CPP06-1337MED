/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:32:20 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/20 17:42:18 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) { return ; }

Base*	generate(void) {
	srand(static_cast<unsigned int>(time(NULL)));
	int temp = (rand() % 3) + 1;
	if (temp == 1)
		return (new A);
	else if (temp == 2)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Identified a pointed class A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified a pointed class B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified a pointed class C." << std::endl;
	else
		std::cout << "[Unknown pointed type]" << std::endl;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Identified a refreced class A." << std::endl;
		return ;
	} catch (std::exception&) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified a refreced class B." << std::endl;
		return ;
	} catch (std::exception&) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified a refreced class C." << std::endl;
		return ;
	} catch (std::exception&) {}
	std::cout << "[Unknown refreced type]" << std::endl;
}
