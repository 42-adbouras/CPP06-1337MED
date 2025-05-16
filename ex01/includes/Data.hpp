/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:18:03 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/15 16:30:59 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

typedef	std::string	str;

struct Data
{
public:
	str		name;
	int		age;
	char	grade;
	void	printData( void );
};
