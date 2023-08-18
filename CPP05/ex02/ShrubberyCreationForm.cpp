/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:57:14 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 19:56:26 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm(rhs), _target(rhs._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getIsSigned() == false)
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > this->getGradeExecute())
		throw(AForm::GradeTooLowException());

	std::string l = this->_target + "_shrubbery";
	const char* p = l.c_str();
	std::ofstream file(p, std::ios_base::app);
	file << "                                                         ." << std::endl;
	file << "                                              .         ;  " << std::endl;
	file << "                 .              .              ;%     ;;   " << std::endl;
	file << "                   ,           ,                :;%  %;   " << std::endl;
	file << "                    :         ;                   :;%;'     .,   " << std::endl;
	file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	file << "                            ;@%. :@%%  %@@%;       " << std::endl;
	file << "                              %@bd%%%bd%%:;     " << std::endl;
	file << "                                #@%%%%%:;;" << std::endl;
	file << "                                %@@%%%::;" << std::endl;
	file << "                                %@@@%(o);  . '         " << std::endl;
	file << "                                %@@@o%;:(.,'         " << std::endl;
	file << "                            `.. %@@@o%::;         " << std::endl;
	file << "                               `)@@@o%::;         " << std::endl;
	file << "                                %@@(o)::;        " << std::endl;
	file << "                               .%@@@@%::;         " << std::endl;
	file << "                               ;%@@@@%::;.          " << std::endl;
	file << "                              ;%@@@@%%:;;;. " << std::endl;
	file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	file.close();
}
