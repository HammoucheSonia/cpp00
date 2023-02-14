/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:32:59 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/17 18:33:04 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::putdata(int i)
{
    index = i;
    cout<<"first_name: ";
    cin>>first_name;
    cout<<"last_name: ";
    cin>>last_name;
    cout<<"nickname: ";
    cin>>nickname;
    cout<<"number: ";
    cin>>number;
    cout<<"secret: ";
    cin>>secret;
}


void Contact::affichage()
{
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nickname << std::endl;
    std::cout << number<< std::endl;
    std::cout << secret << std::endl;
}

string replacer_str(string s1)
{
    string s_1;
    if (s1.size() <= 10)
        return (s1);
    else 
    {
        s_1 = s1.substr(0,9) + ".";
        return (s_1);
    }

}

void Contact::getdata()
{
    if (index > 7)
        index  = 0;
    else if (index < 0)
        index = 0;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << replacer_str(first_name) << std::flush;
    std::cout << "|" << std::setw(10) << replacer_str(last_name) << std::flush;
    std::cout << "|" << std::setw(10) << replacer_str(nickname) << std::flush;
    std::cout << "|" << std::endl;
}

