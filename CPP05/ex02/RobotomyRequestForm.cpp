/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:57:19 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 19:14:29 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs) : AForm(rhs), _target(rhs._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	(void)rhs;
	return (*this);
}

void				RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getIsSigned() == false)
		throw(AForm::NotSignedException());
	else if(executor.getGrade() > this->getGradeExecute())
		throw(AForm::GradeTooLowException());
	
	srand(time(NULL));
	int r = rand() % 100 + 1;
	if (r > 50)
	{
		std::cout << "BrrrrrrrrrrShkibidabadoubaBrrrrrrrrrrrrrrrrrrrr" << std::endl;
		std::cout << this->_target << " has successfully been ROBOTOMIZED" << std::endl;
	}
	else
		std::cout << this->_target << " has NOT been ROBOTOMIZED" << std::endl;
}