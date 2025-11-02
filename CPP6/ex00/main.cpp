/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:31:34 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/20 18:31:38 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "dir hkaaa asa7biiii : ./convert <literal>\n";
        return 1;
    }

    ScalarConverter::convert(argv[1]);
    return 0;
}
