/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:32:21 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/17 18:32:32 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <cstdio>
using namespace std; 

int main()
{
    string input;
    Contact contacts[8];
    int i = 0;
    int p = 0;

    cout << "Welcome to your Phone Book!" << std::endl;
    cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
    while(std::getline(std::cin, input))
    {
        if (input == "ADD")
        {
            if (i == 8)
                i = 0;
            contacts[i].putdata(i);
            i++;
        }
        else if (input == "SEARCH")
        {
            for (int j = 0; j < 8; j++)
               contacts[j].getdata();
            cout<<"L'index que vous voulez: ";
            cin>>p;
            if (p >= 8)
                cout << "cette index n'existe pas\n";
            else if (p >= i)
                cout << "vous avez pas encore saisi ce contact\n";
            else
                contacts[p].affichage();
        }
        else if (input == "EXIT")
            return (0);
    }
    return (0);
}