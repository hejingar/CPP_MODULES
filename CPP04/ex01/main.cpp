/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:04:24 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 17:27:52 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const Cat* cat = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		cat->getBrain()->setIdea("Bright idea");
		std::cout << "Cat has this idea " << cat->getBrain()->getIdea(0) << std::endl;
		std::cout << "Now we test the deep copy to see if the new cat Brain has the same as the old one" << std::endl;
		const Cat* cot = cat;
		std::cout << "Now cot has this idea " << cot->getBrain()->getIdea(100) << std::endl;
		delete j;
		delete i;
		delete cat;
	}
	return 0;
}