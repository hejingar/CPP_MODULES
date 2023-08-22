/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:16:29 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 22:47:14 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data* salut = new Data;
    salut->s = "SALUUUUUUT";
    
    std::cout << "Printons la data du pointeur de base : " << salut->s << std::endl;
    std::cout << "Adresse de cette data : " << salut << std::endl;

    uintptr_t rawSalut = Serializer::serialize(salut);
    
    std::cout << "Adresse de la var uintptr suite a un serialize : " << rawSalut << std::endl;
    std::cout << "Maintenant, recuperons le pointeur d'origine grace a deserialize" << std::endl;

    Data* aurevoir = Serializer::deserialize(rawSalut);
    std::cout << "Printons la data du deserialized ptr : " << aurevoir->s << std::endl;
    std::cout << "Adresse de cette data : " << aurevoir << std::endl;
    
    delete salut;
    return (0);
}