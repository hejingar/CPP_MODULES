/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:19:55 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 17:43:47 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int gradeSign, int gradeExecute) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	std::cout << "Form constructor called" << std::endl;

	if (_gradeSign < 1 || _gradeExecute < 1)
		throw(Form::GradeTooHighException());
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw(Form::GradeTooLowException());
}

Form::Form(const Form& rhs) : _name(rhs.getName()), _sign(false), _gradeSign(rhs.getGradeSign()), _gradeExecute(rhs.getGradeExecute())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = rhs;
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Form copy assignement called" << std::endl;
	if (this != &rhs)
	{
		this->_sign = rhs.getIsSigned();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

const std::string&	Form::getName() const
{
	return (this->_name);
}

bool				Form::getIsSigned() const
{
	return (this->_sign);
}

int					Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int					Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

void				Form::beSigned(const Bureaucrat& bae)
{
	if (bae.getGrade() <= this->_gradeSign)
		this->_sign = true;
	else
		throw(Bureaucrat::GradeTooLowException());
}

std::ostream&		operator<<(std::ostream& o, Form& form)
{
	o << "Form : " << form.getName() << std::endl << "Grade to sign : " << form.getGradeSign() 
		<< std::endl << "Grade to execute : " << form.getGradeExecute() << std::endl
		<< "Signed ? " << form.getIsSigned() << std::endl;
	return (o);
}
