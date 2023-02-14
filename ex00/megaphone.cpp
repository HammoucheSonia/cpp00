/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:08:11 by shammouc          #+#    #+#             */
/*   Updated: 2022/12/30 15:08:17 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int j = 1;
    int i = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    { 
        while (j < argc)
        {
            while (argv[j][i])
            {
                argv[j][i] = toupper(argv[j][i]);
                std::cout << (argv[j][i]);
                i++;
            }
            i = 0;
            j++;
        }
    }
    std::cout << "\n";
    return (0);    
}