/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:19:40 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 01:05:58 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
    try {
        std::vector<int> vec;

        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        vec.push_back(50);
        
        std::vector<int>::iterator itVec = easyfind(vec, 10);
        std::cout << "Found in vector: " << *itVec << std::endl;

        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(12);
        lst.push_back(13);
        lst.push_back(14);
        lst.push_back(15);
        std::list<int>::iterator itList = easyfind(lst, 1);
        std::cout << "Found in list: " << *itList << std::endl;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
