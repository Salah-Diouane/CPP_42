/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:43:39 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/14 12:16:48 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int arc, char **arv)
{
    if (arc == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
    else
    {
        for (int i = 1; arv[i]; i++)
        {
            for (int j = 0; arv[i][j]; j++)
                arv[i][j] = std:: toupper(arv[i][j]);
            std :: cout << arv[i];
        }
            std :: cout << std::endl;
    }
}
