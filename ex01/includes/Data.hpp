/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:18:03 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/27 17:44:34 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

typedef	std::string	str;

struct Data
{
private:
	str		_name;
	int		_age;
	char	_grade;
public:
	Data(  str name, int age, char grade )
		: _name(name), _age(age), _grade(grade) {}
	void	printData( void );
};
