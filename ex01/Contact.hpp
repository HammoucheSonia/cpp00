/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:33:11 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/17 18:33:14 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

class Contact
{
    private:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string secret;
    
    public:
        void putdata(int i);
        void getdata();
        void affichage();

};