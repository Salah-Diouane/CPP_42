/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:03:54 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/26 08:53:38 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int random = std::rand();
    if (random % 2 == 0)
        return new A();
    else if (random % 3 == 0)
        return new B();
    else
        return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "in first identify, is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "in first identify, is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "in first identify, is C" << std::endl;
    else
		std::cout << "UNKNOWN TYPE !!!" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& derived_ref = dynamic_cast<A&>(p); 
        (void)derived_ref;
		std::cout << "in second identify, is A" << std::endl;
        return ;
    }
    catch(std::exception &e)
    {
        try
        {
            B& derived_ref = dynamic_cast<B&>(p); 
            (void)derived_ref;
            std::cout << "in second identify, is B" << std::endl;
            return ;
        }
        catch(std::exception &e)
        {
            try
            {
                C& derived_ref = dynamic_cast<C&>(p); 
                std::cout << "in second identify, is C" << std::endl;
                (void)derived_ref;
                return ;
            }
            catch(std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
    }
    
    
}

int main()
{
    std::srand(std::time(0)); 
    Base* base = generate();
    
    identify(base);
    identify(*base);
    delete base;
}
