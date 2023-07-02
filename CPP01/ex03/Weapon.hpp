/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:57:43 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/02 18:24:54 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


#include <iostream>

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon(std::string type);
		~Weapon();
		
		const std::string&	getType(void);
		void				setType(std::string type);
};
#endif