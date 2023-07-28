/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:04:56 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 13:32:50 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	private:

	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string typu);
		Animal(const Animal& rhs);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal();

		std::string	getType() const;
		virtual void	makeSound() const;

};

#endif