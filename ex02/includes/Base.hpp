/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:32:06 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/16 17:00:09 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class	Base
{
public:
	virtual ~Base( void );
};

class A : public Base {
	public:
		int a{10};
};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);