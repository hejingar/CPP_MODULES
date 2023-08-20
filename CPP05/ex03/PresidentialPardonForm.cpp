/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:57:25 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 19:22:34 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) : AForm(rhs), _target(rhs._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->getIsSigned() == false)
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > this->getGradeExecute())
		throw(AForm::GradeTooLowException());
		
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}