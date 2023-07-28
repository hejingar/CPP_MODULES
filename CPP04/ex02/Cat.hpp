/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:20:20 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 18:06:46 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		~Cat();

		void	makeSound() const;
		Brain*	getBrain() const;
};
#endif