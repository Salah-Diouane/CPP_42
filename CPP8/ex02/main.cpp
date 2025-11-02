/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:58:48 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 00:28:52 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"
#include <list>

int main()
{
    MutantStack< int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "top  : " << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << "size : " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << "-> : " << *it << std::endl;
    }
    
    std::cout << mstack.top() << std::endl;
    
    MutantStack< int>::iterator it = mstack.begin();
    MutantStack< int>::iterator ite = mstack.end();

    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::cout << "size : " << s.size() << std::endl;
    
    printf("-------------------------------------------------------------------------------\n");
    
    std::list< int> mstack_s;
    mstack_s.push_back(5);
    mstack_s.push_back(17);

    std::cout << "top  : " << mstack_s.back() << std::endl;
    
    mstack_s.pop_back();
    
    std::cout << "size : " << mstack_s.size() << std::endl;
    
    mstack_s.push_back(3);
    mstack_s.push_back(5);
    mstack_s.push_back(737);


    for (std::list<int>::iterator it = mstack_s.begin(); it != mstack_s.end(); ++it)
    {
        std::cout << "-> : " << *it << std::endl;
    }
    
    std::cout << mstack_s.back() << std::endl;
    
    std::list< int>::iterator it_s = mstack_s.begin();
    std::list< int>::iterator ite_s = mstack_s.end();

    
    ++it_s;
    --it_s;
    
    while (it_s != ite_s)
    {
        std::cout << *it_s << std::endl;
        ++it_s;
    }

    std::list<int> s_s(mstack_s);
    std::cout << "size : " << s_s.size() << std::endl;
    return 0;
}
