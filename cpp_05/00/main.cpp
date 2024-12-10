/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:47:47 by orezek            #+#    #+#             */
/*   Updated: 2024/12/10 23:00:51 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat will("Will", 10);
	Bureaucrat petr = Bureaucrat("Petr", 1);
	try
	{
		will.incrementGrade();
		petr.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << will << std::endl;
	std::cout << petr << std::endl;
}
