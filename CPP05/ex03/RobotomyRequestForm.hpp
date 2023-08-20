/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:57:16 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 19:39:54 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{

	private :
		const std::string& _target;
		
	public :
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& rhs);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();
		
		void	execute(const Bureaucrat& executor) const;
};

#endif