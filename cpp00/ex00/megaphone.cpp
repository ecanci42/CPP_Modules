/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:48 by ecanci            #+#    #+#             */
/*   Updated: 2023/11/29 14:46:15 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef int integer;
typedef char string;

int main(integer ac, string **av)
{
    integer i(1), j(0);

    if (ac > 1)
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
                std::cout << (string)toupper(av[i][j++]);
            std::cout << " ";
            i++;
        }
    }
    else
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    std::cout << std::endl;
    return (0);
}
