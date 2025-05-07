/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:41:17 by pau               #+#    #+#             */
/*   Updated: 2025/04/19 14:59:29 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main() {
    Harl harl;

    std::cout << "[DEBUG]" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "[INFO]" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "[WARNING]" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "[ERROR]" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "[UNKNOWN]" << std::endl;
    harl.complain("NOTALEVEL");
    std::cout << std::endl;

    return 0;
}