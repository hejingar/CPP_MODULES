/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:04:56 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 18:06:31 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	private:

	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(std::string typu);
		AAnimal(const AAnimal& rhs);
		AAnimal& operator=(const AAnimal& rhs);
		virtual ~AAnimal();

		std::string	getType() const;
		virtual void	makeSound() const = 0;

};

#endif