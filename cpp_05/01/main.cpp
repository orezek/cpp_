/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:47:47 by orezek            #+#    #+#             */
/*   Updated: 2024/12/11 18:39:23 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat will("Will", 10);
	Bureaucrat petr = Bureaucrat("Petr", 1);
	Bureaucrat jane("Jane", 150);
	try
	{
		// once na exception is caught the execution exits the try clause
		Bureaucrat lada("Lada", 0);
		Bureaucrat tomas("Tomas", 178);
		will.incrementGrade();
		petr.incrementGrade();
		jane.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat lada("Lada", 0);
		std::cout << lada << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	try
	{
		Bureaucrat tomas("Tomas", 178);
		std::cout << tomas << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << will << std::endl;
	std::cout << petr << std::endl;
	std::cout << jane << std::endl;
	return (0);
}
