/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:19:58 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 18:00:56 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:	
		AForm(const std::string& name, int gradeSign, int gradeExecute);
		AForm(const AForm& rhs);
		AForm& operator=(const AForm& rhs);
		~AForm();

		const std::string&	getName() const;
		bool				getIsSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		
		void				beSigned(const Bureaucrat& bae);
		virtual void		execute(Bureaucrat const & executor) const = 0;
	
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
