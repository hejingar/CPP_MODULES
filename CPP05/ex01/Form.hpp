/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:19:58 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 17:36:40 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:	
		Form(const std::string& name, int gradeSign, int gradeExecute);
		Form(const Form& rhs);
		Form& operator=(const Form& rhs);
		~Form();

		const std::string&	getName() const;
		bool				getIsSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		
		void				beSigned(const Bureaucrat& bae);
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Grade too high!";
			}
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Grade too low!";
			}
	};
};

std::ostream& operator<<(std::ostream& o, Form& form);

#endif
