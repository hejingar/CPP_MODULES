/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:53:32 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 13:14:20 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    srand(time(NULL));
    Base* rand = generate();
    Base* ran = generate();
    Base* ra = generate();

    identify(rand);
    identify(ran);
    identify(ra);

	delete rand;
	delete ran;
	delete ra;
}