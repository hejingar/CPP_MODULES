/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:19:55 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:03 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeSign, int gradeExecute) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw(AForm::GradeTooHighException());
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw(AForm::GradeTooLowException());
}

AForm::AForm(const AForm& rhs) : _name(rhs.getName()), _sign(false), _gradeSign(rhs.getGradeSign()), _gradeExecute(rhs.getGradeExecute())
{
	*this = rhs;
}

AForm&	AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
	{
		this->_sign = rhs.getIsSigned();
	}
	return (*this);
}

AForm::~AForm() {}

const std::string&	AForm::getName() const
{
	return (this->_name);
}

bool				AForm::getIsSigned() const
{
	return (this->_sign);
}

int					AForm::getGradeSign() const
{
	return (this->_gradeSign);
}

int					AForm::getGradeExecute() const
{
	return (this->_gradeExecute);
}

void				AForm::beSigned(const Bureaucrat& bae)
{
	if (bae.getGrade() <= this->_gradeSign)
		this->_sign = true;
	else
		throw(Bureaucrat::GradeTooLowException());
}

std::ostream&		operator<<(std::ostream& o, AForm& form)
{
	o << "Form : " << form.getName() << std::endl << "Grade to sign : " << form.getGradeSign() 
		<< std::endl << "Grade to execute : " << form.getGradeExecute() << std::endl
		<< "Signed ? " << form.getIsSigned() << std::endl;
	return (o);
}
