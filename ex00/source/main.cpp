/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:25:59 by adbouras          #+#    #+#             */
/*   Updated: 2025/04/27 17:49:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstring>

void detectAndConvertType(const std::string &input) {
    try {
        // Check for single character
        if (input.length() == 1 && !std::isdigit(input[0])) {
            char c = input[0];
            std::cout << "Type: char, Value: " << c << std::endl;
            return;
        }

        // Check for float literals
        if (input == "-inff" || input == "+inff" || input == "nanf") {
            std::cout << "Type: float, Value: " << input << std::endl;
            return;
        }

        // Check for double literals
        if (input == "-inf" || input == "+inf" || input == "nan") {
            std::cout << "Type: double, Value: " << input << std::endl;
            return;
        }

        // Check for float with 'f' suffix
        if (input[input.size() - 1] == 'f') { // Replace input.back() with input[input.size() - 1]
            char *end;
            float f = static_cast<float>(std::strtod(input.c_str(), &end));
            if (*end == 'f') {
                std::cout << "Type: float, Value: " << f << std::endl;
                return;
            }
        }

        // Check for integer
        char *end;
        long int i = std::strtol(input.c_str(), &end, 10);
        if (*end == '\0') {
            std::cout << "Type: int, Value: " << i << std::endl;
            return;
        }

        // Otherwise, treat as double
        double d = std::strtod(input.c_str(), &end);
        if (*end == '\0') {
            std::cout << "Type: double, Value: " << d << std::endl;
            return;
        }

        // If no valid conversion
        throw std::invalid_argument("Invalid input");

    } catch (const std::exception &e) {
        std::cerr << "Error: Invalid input - " << e.what() << std::endl;
    }
}

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: ./program <literal>" << std::endl;
        return 1;
    }

    std::string input = av[1];
    detectAndConvertType(input);

    return 0;
}