/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:54 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 17:51:35 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade; 
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& rhs);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat();
		
		const std::string	getName() const;
		int					getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(AForm& form);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return "Grade too high!";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return "Grade too low!";
			}
	};
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& lui);

#endif